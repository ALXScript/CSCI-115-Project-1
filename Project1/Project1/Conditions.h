#ifndef CONDITIONS_H
#define CONDITIONS_H

#include "MyArray.h"
#include "SortingAlgs.h"
#include <iostream>

//Insertion Sort with Sorted Condition
void insSortSorted(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
			ourArray<int> execute(arraySize);
			execute.preSort();
			clock_t start = clock();
			insSort(execute, 0, arraySize);
			double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
			timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Insertion Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Insertion Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Insertion Sort with Shuffled Condition
void insSortShuffled(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle();
		clock_t start = clock();
		insSort(execute, 0, arraySize);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Insertion Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Insertion Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Insertion Sort with 10% Shuffle Condition
void insSortShuffled10(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle10();
		clock_t start = clock();
		insSort(execute, 0, arraySize);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Insertion Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Insertion Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Insertion Sort with Reverse Sorted Condition
void insSortReversed(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		//execute.preSort();
		execute.reverse();
		clock_t start = clock();
		insSort(execute, 0, arraySize);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Insertion Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Insertion Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Selection Sort with Sorted Condition
void selSortSorted(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		clock_t start = clock();
		selSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Selection Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Selection Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Selection Sort with Shuffled Condition
void selSortShuffled(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle();
		clock_t start = clock();
		selSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Selection Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Selection Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Selection Sort with 10% Shuffle Condition
void selSortShuffled10(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle10();
		clock_t start = clock();
		selSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Selection Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Selection Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Selection Sort with Reverse Sorted Condition
void selSortReversed(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.reverse();
		clock_t start = clock();
		selSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Selection Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Selection Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Bubble Sort with Sorted Condition
void bubbleSortSorted(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		clock_t start = clock();
		bubbleSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Bubble Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Bubble Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Bubble Sort with Shuffled Condition
void bubbleSortShuffled(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle();
		clock_t start = clock();
		bubbleSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Bubble Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Bubble Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Bubble Sort with 10% Shuffle Condition
void bubbleSortShuffled10(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle10();
		clock_t start = clock();
		bubbleSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Bubble Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Bubble Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Bubble Sort with Reverse Sorted Condition
void bubbleSortReversed(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.reverse();
		clock_t start = clock();
		bubbleSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Bubble Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Bubble Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;


}

//Quick Sort with Sorted Condition
void quickSortSorted(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		clock_t start = clock();
		quickSort(execute, 0, arraySize-1);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Quick Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Quick Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Quick Sort with Shuffled Condition
void quickSortShuffled(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle();
		clock_t start = clock();
		quickSort(execute, 0, arraySize - 1);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Quick Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Quick Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Quick Sort with 10% Shuffled Condition
void quickSortShuffled10(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle10();
		clock_t start = clock();
		quickSort(execute, 0, arraySize - 1);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Quick Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Quick Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Quick Sort with Reverse Sorted Condition
void quickSortReversed(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.reverse();
		clock_t start = clock();
		quickSort(execute, 0, arraySize - 1);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Quick Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Quick Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;


}

//Merge Sort with Sorted Condition
void mergeSortSorted(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		clock_t start = clock();
		mergeSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Merge Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Merge Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Merge Sort with Shuffled Condition
void mergeSortShuffled(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle();
		clock_t start = clock();
		mergeSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Merge Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Merge Sort with Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Merge Sort with 10% Shuffle Condition
void mergeSortShuffled10(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.shuffle10();
		clock_t start = clock();
		mergeSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Merge Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Merge Sort with 10% Shuffled Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;

}

//Merge Sort with Reverse Sorted Condition
void mergeSortReversed(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0; i < 100; i++)
	{
		ourArray<int> execute(arraySize);
		execute.preSort();
		execute.reverse();
		clock_t start = clock();
		mergeSort(execute);
		double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
		timeArray.setElem(i, timeSpent);
	}

	std::cout << std::endl << "Mean of Merge Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << std::endl;
	std::cout << std::endl << "Standard Deviation of Merge Sort with Reverse Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << std::endl;


}

#endif