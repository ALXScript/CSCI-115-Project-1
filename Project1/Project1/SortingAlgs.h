#ifndef SORTING_ALGS_H
#define SORTING_ALGS_H

#include "MyArray.h"
#include <ctime>

/*
What Has been changed:
1. Made sorting functions compatible with class ourArray due to them not being able to make direct changes to the array
2. Removed time keeping part of functions so we could implement them in main or elsewhere
3. For some reason all srand/time errors from before are gone. I hope it stays that way lol
4. Any other changes marked with ///

Needs fixing:
*/

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
	int j;
	for (int i = 0; i < hi; i++)
	{
		j = i;
		while (j > 0 && arr.getElem(j) < arr.getElem(j-1))
		{
			arr.swapElem(j - 1, j);
			j--;
		}
	}
}

//Function: Bubble Sort
template <typename T>
void bubbleSort(ourArray<T> &arr) {
	for (int i = 0; i < arr.getSize()-1; i++)
	{
		for (int j = 0;j < arr.getSize()-i-1; j++)
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
	ourArray<T> aux(arr.getSize());
	mergeS(arr, aux, 0, arr.getSize() - 1);
}

//Function: Belongs to Quick Sort function : This function partitions the array
template <typename T>
int partition(ourArray<T> &arr, int lo, int hi) {
	int m = (lo + hi) / 2;
	//std::cout << m << std::endl;
	arr.swapElem(lo, m);
	T pivot = arr.getElem(lo);
	int l = lo + 1;
	int r = hi;
	while (l <= r) {
		while (arr.getElem(r) > pivot) {
			r = r - 1;
		}
		while (l <= r && arr.getElem(l) <= pivot) {
			l = l + 1;
		}
		if (l <= r) {
			arr.swapElem(l, r);
			l = l + 1;
			r = r - 1;
		}
	}
	arr.swapElem(lo, r);
	return r;
}


//Function: Quick Sort
template<typename T>
void quickSort(ourArray<T> &arr, int lo, int hi) {
	if (lo < hi)
	{
		int p = partition(arr, lo, hi);
		quickSort(arr, lo, p - 1);
		quickSort(arr, p + 1, hi);
	}
}

#endif // !SORTING_-_ALGS_H
