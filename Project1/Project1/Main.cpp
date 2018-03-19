#include"MyArray.h"
#include"Sorting-Algs.h"
#include<cstdlib>
#include<iostream>

using namespace std;

void main()
{	
	//characters for selecting the types we want
	char sort;
	char arrayType;
	int arraySize;
	
	/*
	legend:
	e = Exit
	i = Insertion Sort
	s = Selection Sort
	b = Bubble Sort
	q = Quick Sort
	m = Merge Sort
	*/
	
	while (sort != 'e')
	{
		switch (sort)
		{
		//Insertion sort
		case 'i':
			switch (arrayType)
			{
			//sorted
			case 's':
				switch (arraySize)
				{
				//size 10
				case 10:
					/*
					//Insertion Sort for a Sorted Array of Size 10
					ourArray<double> timeArray(100);
					
					for(int i = 0, i < 100, i++)
					{
						ourArray<int> execute(arraySize)
						execute.preSort();
						Start timer
						insSort(execute);
						end timer
						double timeSpent = end timer - start timer
						timeArray.setElem(i, timeSpent);
						~execute()
					}

					cout << endl << "Mean of Insertion Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getMean() << endl;
					cout << endl << "Standard Deviation of Insertion Sort with Sorted Array of Size " << arraySize << " = " << timeArray.getStDev() << endl;

					~timeArray();
					
					*/
					break;

				//size 1000
				case 1000:
					//Insertion Sort For a Sorted Array of Size 1,000
					break;

				//size 10,000
				case 10000:
					//Insertion Sort For a Sorted Array of Size 10,000
					break;

				//size 100,000
				case 100000:
					//Insertion Sort For a Sorted Array of Size 100,000
					break;

				//size 1,000,000
				case 1000000:
					//Insertion Sort For a Sorted Array of Size 1,000,000
					break;

				//default UI
				default:
					break;
				}
				break;
				
			//completely shuffled
			case 'h':
				break;

			//reverse order
			case 'r':
				break;

			//sorted and shuffled at 10%
			case 't':
				break;

			//default UI
			default:
				break;
			}
			break;

		//Selection sort
		case 's':
			break;

		//Bubble Sort
		case 'b':
			break;

		//Quick Sort
		case 'q':
			break;

		//Merge Sort
		case 'm':
			break;

		//default UI
		default:
			cout << "\n\nWhat would you like to do?\ni: Insertion Sort\ts: Selection Sort\nb: Bubble Sort\tq = Quick Sort\nm: Merge Sort\te: Exit\n";
			cin >> sort;
			break;
		}
	}
	
	
}