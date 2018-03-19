#ifndef CONDITIONS_H
#define CONDITIONS_H

#include "MyArray.h"
#include "Sorting-Algs.h"
#include <iostream>
#include <ctime>

void insSorted(int arraySize) {
	ourArray<double> timeArray(100);

	for (int i = 0, i < 100, i++)
	{
			ourArray<int> execute(arraySize);
			execute.preSort();
			clock_t start = clock();
			insSort(execute, 0, arraySize-1);
			double timeSpent = (clock() - start) / (double)CLOCKS_PER_SEC;
			timeArray.setElem(i, timeSpent);
			~execute();
	}

	cout << endl << "Mean of Insertion Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << endl;
	cout << endl << "Standard Deviation of Insertion Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << endl;

		~timeArray();

}

#endif