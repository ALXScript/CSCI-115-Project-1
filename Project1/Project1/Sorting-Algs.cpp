#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void shuffle(int *arr, int N){ // shuffles order of input array
    srand(time(0));
    for (int i= 0; i< N; i++){
        swap(arr[i], arr[rand()%100]);
    }
}
void dispArr(int arr[], int N){ //for displaying array
    for (int i = 0; i<N; i++){
		cout<< arr[i]<< ", ";}
}
void randomize(int *arr, int N){ //assigns array random values
    srand(time(0));
    for (int i=0; i<N; i++) arr[i] = rand()%100;
}
void selSort(int *arr, int N){ //selection sort
	for (int i=0; i<N; i++){
		int min= arr[i];
		int ind= i;
		for (int j= i; j<N; j++){
			if (arr[j]<min){
				min = arr[j];
				ind = j;
			}
		}
		if (min < arr[i]){
		swapArr(arr, i, ind);
		}
	}
}
void insSort(int *arr, int lo, int hi){ //insertion sort
        for (int i=lo+1; i<= hi;i++){
        int idx = i;
        for (int j = i-1; j>=lo; j--){
            while(arr[idx] <arr[j]){
                swap(arr[idx], arr[j]);
                idx = j;}
        }
	}
}
void bubbleSort(int *arr, int size){
	for (int i = 0; i < size-1; i++){     
       for (int j = 0; j < size-1; j++) 
           if (arr[j] > arr[j+1])
              swapArr(arr, j, j+1);
          }
}
void merge(int a[], int aux[], int lo, int mid, int hi){ // merge function for mergesort
    for (int idx = lo; idx <= hi; idx++) //refreshes the aux array to proper sorted order 
        aux[idx] = a[idx];
    int i = lo, j = mid+1; // sets start of subarrays 
    for (int idx = lo; idx <= hi; idx++){
        if (i > mid) a[idx] = aux[j++]; //if lo index is greater than middle index then set a[curr index]
        else if (j > hi) a[idx] = aux[i++];
        else if (aux[j]< aux[i]) a[idx] = aux[j++];
        else a[idx] = aux[i++];
    } 
}    
void mergeS(int a[], int aux[], int lo, int hi){ // mergeSort that recursively breaks up array into sub arrays
    if (lo < hi){   
        int mid = (lo + hi - 1) /2;
        mergeS(a, aux, lo, mid);
        mergeS(a, aux, mid+1, hi);
        merge(a, aux, lo, mid, hi);
    }
}
void mergeSort(int arr[], int N){ //initializes the mergesort function
    int aux[N];
    clock_t start = clock();
    mergeS(arr, aux, 0, N-1);
    double duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
    cout<< "Time for MergeSort is: " << duration << endl; 
}
int partition(int arr[], int lo, int hi){ //function belongs to Quick Sort function; this function partitions array
    int i = lo, j = hi+1;
    while (true){
        while (arr[++i]< arr[lo])
            if (i == hi) break;
        while (arr[lo]< arr[--j])
            if (j == lo) break;
        if (i >= j) break;
        swap(arr[i], arr[j]);
 }
    swap(arr[lo], arr[j]);
    return j;
}
void quickSort(int arr[], int lo, int hi){
    if (hi <= lo) return;
    int p = partition(arr, lo, hi);
    quickSort(arr, lo, p - 1);
    quickSort(arr, p + 1, hi); 
}    

int main(){
	int arr[1000000];
	randomize(arr, 1000000);
	//dispArr(arr, 1000000);
	//shuffle(arr, 10);
	clock_t start = clock();
	quickSort(arr,0, 1000000);
	double duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
    cout<< "Time for QuickSort is: " << duration << endl; 
	//cout<< endl;
	//dispArr(arr, 10);
	return 0;
}
