#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

/*
What still needs to be fixed:
	1. srand and time are still showing errors
	2. Clock(), clock_T, and CLOCKS_PER_SECOND are still showing errors
	
What Has been changed:
	1. Changed formatting to make it more readable
	2. Any changes to code will be described using "///" commentary
	3. Errors with lo, hi, arr, and idx fixed (wrong way to call pointer arr* changed to *arr
	4. swapArr function implemented, fixed swapArr errors
*/

//Function: Swap elements in an array
void swapArr(int *myArr, int index1, int index2) {
	int temp;
	temp = myArr[index1];
	myArr[index1] = myArr[index2];
	myArr[index2] = temp;
}

//Function: Displays array
void dispArr(int arr[], int N){
    for (int i = 0; i<N; i++)
	{
		cout<< arr[i]<< ", ";
	}
}

//Function: Assigns random array values
void randomize(int *arr, int N){
    srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}
}

//Function: Selection sort
void selSort(int *arr, int N){
	for (int i=0; i<N; i++)
	{
		int min= arr[i];
		int ind= i;
		for (int j= i; j<N; j++)
		{
			if (arr[j]<min)
			{
				min = arr[j];
				ind = j;
			}
		}
		if (min < arr[i])
		{
			swapArr(arr, i, ind);
		}
	}
}

//Function: Insertion Sort
void insSort(int *arr, int lo, int hi){
        for (int i=(lo+1); i<= hi;i++)
		{
			int idx = i;
			for (int j = (i-1); j>=lo; j--)
			{
				while(arr[idx] <arr[j])
				{
					swap(arr[idx], arr[j]);
					idx = j;
				}
			}
		}
}

//Function: Bubble Sort
void bubbleSort(int *arr, int size){
	for (int i = 0; i < size-1; i++)
	{     
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swapArr(arr, j, j + 1);
			}
		}
    }
}

//Function: Merge for Merge Sort
void merge(int *a, int *aux, int lo, int mid, int hi){	///originally a* and aux* changed to *a and *aux
	//refreshes the aux array to proper sorted order
	for (int idx = lo; idx <= hi; idx++)
	{
		aux[idx] = a[idx];
	}

	//sets start of subarrays 
	int i = lo, j = mid+1;

    for (int idx = lo; idx <= hi; idx++)
	{
		//if lo index is greater than middle index then set a[curr index]
		if (i > mid)
		{
			a[idx] = aux[j++];
		}
		else if (j > hi)
		{
			a[idx] = aux[i++];
		}
		else if (aux[j] < aux[i])
		{
			a[idx] = aux[j++];
		}
		else
		{
			a[idx] = aux[i++];
		}
    } 
}    

//Function: Merge Sort that recursively breaks up array into subarrays
void mergeS(int *a, int *aux, int lo, int hi){	///originally a* and aux* changed to *a and *aux
    if (lo < hi)
	{   
        int mid = (lo + hi - 1) /2;
        mergeS(a, aux, lo, mid);
        mergeS(a, aux, mid+1, hi);
        merge(a, aux, lo, mid, hi);
    }
}

//Function: Initializes the mergesort function
void mergeSort(int *arr, int N){	///originally arr* changed to *arr
    int aux[N];
    clock_t start = clock();
    mergeS(arr, aux, 0, N-1);
    double duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
    cout<< "Time for MergeSort is: " << duration << endl; 
}

//Function: Belongs to Quick Sort function : This function partitions the array
int partition(int *arr, int lo, int hi){	///originally arr* changed to *arr
    int i = lo, j = hi+1;
    while (true)
	{
		while (arr[i++] < arr[lo]) ///originally ++i changed to i++
		{
			if (i == hi)
			{
				break;
			}
		}
		while (arr[lo] < arr[j--]) ///originally --j changed to j--
		{
			if (j == lo)
			{
				break;
			}
		}
		if (i >= j)
		{
			break;
		}
        swap(arr[i], arr[j]);
	}
    swap(arr[lo], arr[j]);
    
	return j;
}

//Function: Quick Sort
void quickSort(int *arr, int lo, int hi){	///originally arr* changed to *arr
	if (hi <= lo)
	{
		return;
	}
    int p = partition(arr, lo, hi);
    quickSort(arr, lo, p - 1);
    quickSort(arr, p + 1, hi); 
}    
