#ifndef SORTING_ALGS_H
#define SORTING_ALGS_H


#include "MyArray.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

//using namespace std;
/*
What Has been changed:
1. Made sorting functions compatible with class ourArray due to them not being able to make direct changes to the array
2. Removed time keeping part of functions so we could implement them in main or elsewhere
3. For some reason all srand/time errors from before are gone. I hope it stays that way lol
4. Any other changes marked with ///

Needs fixing:

*/

//Function: Swap elements in an array
//void swapArr(int *myArr, int index1, int index2) {
//	int temp;
//	temp = myArr[index1];
//	myArr[index1] = myArr[index2];
//	myArr[index2] = temp;
//}
//
////Function: Displays array
//void dispArr(int arr[], int N){
//    for (int i = 0; i<N; i++)
//	{
//		std::cout<< arr[i]<< ", ";
//	}
//}

//Function: Assigns random array values
template <typename T>
void randomize(ourArray<T> &arr) {
	srand(time(NULL));
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr.setElem(i, rand() % 100);
	}
}

//Function: Selection sort
template <typename T>
void selSort(ourArray<T> &arr) {
	for (int i = 0; i< arr.getSize(); i++)
	{
		int min = arr.getElem(i);
		int ind = i;
		for (int j = i; j< arr.getSize(); j++)
		{
			if (arr.getElem(j)<min)
			{
				min = arr.getElem(j);
				ind = j;
			}
		}
		if (min < arr.getElem(i))
		{
			arr.swapElem(i, ind);
		}
	}
}

//Function: Insertion Sort
template <typename T>
void insSort(ourArray<T> &arr, int lo, int hi) {
	for (int i = (lo + 1); i <= hi; i++)
	{
		int idx = i;
		for (int j = i - 1; j >= lo; j--)
		{
			while (arr.getElem(idx) < arr.getElem(j))
			{
				arr.swapElem(idx, j);
				idx = j;
			}
		}
	}
}

//Function: Bubble Sort
template <typename T>
void bubbleSort(ourArray<T> &arr) {
	for (int i = 0; i < arr.getSize() - 1; i++)
	{
		for (int j = 0; arr.getSize() - 1; j++)
		{
			if (arr.getElem(j) > arr.getElem(j + 1))
			{
				arr.swapElem(j, j + 1);
			}
		}
	}
}

//Function: Merge for Merge Sort
template <typename T>
void merge(ourArray<T> &arr, ourArray<T> &aux, int lo, int mid, int hi) {
	//refreshes the aux array to proper sorted order
	for (int idx = lo; idx <= hi; idx++)
	{
		aux.setElem(idx, arr.getElem(idx));
	}

	//sets start of subarrays 
	int i = lo, j = mid + 1;

	for (int idx = lo; idx <= hi; idx++)
	{
		//if lo index is greater than middle index then set a[curr index]
		if (i > mid)
		{
			arr.setElem(idx, aux.getElem(j++));
		}
		else if (j > hi)
		{
			arr.setElem(idx, aux.getElem(i++));
		}
		else if (aux.getElem(j) < aux.getElem(i))
		{
			arr.setElem(idx, aux.getElem(j++));
		}
		else
		{
			arr.setElem(idx, aux.getElem(i++));
		}
	}
}

//Function: Merge Sort that recursively breaks up array into subarrays
template <typename T>
void mergeS(ourArray<T> &arr, ourArray<T> &aux, int lo, int hi) {
	if (lo < hi)
	{
		int mid = (lo + hi - 1) / 2;
		mergeS(arr, aux, lo, mid);
		mergeS(arr, aux, mid + 1, hi);
		merge(arr, aux, lo, mid, hi);
	}
}

//Function: Initializes the mergesort function
template <typename T>
void mergeSort(ourArray<T> &arr) {
	ourArray<T> aux = ourArray(arr.getSize);
	mergeS(arr, aux, 0, arr.getSize() - 1);
}

//Function: Belongs to Quick Sort function : This function partitions the array
template <typename T>
int partition(ourArray<T> &arr, int lo, int hi) {
	int i = lo, j = hi + 1;
	while (true)
	{
		while (arr.getElem(++i) < arr.getElem(lo)) /// changed back to ++i because the way the function is written it has to increment this index before running the while loop
		{
			if (i == hi)
			{
				break;
			}
		}
		while (arr.getElem(lo) < arr.getElem(--j)) /// changed back to --j because the way the function is written it has to decrement this index before running the while loop
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
		arr.swapElem(i, j);
	}
	arr.swapElem(lo, j);

	return j;
}

//Function: Quick Sort
template<typename T>
void quickSort(ourArray<T> &arr, int lo, int hi) {
	if (hi <= lo)
	{
		return;
	}
	int p = partition(arr, lo, hi);
	quickSort(arr, lo, p - 1);
	quickSort(arr, p + 1, hi);
}

#endif // !SORTING_-_ALGS_H
