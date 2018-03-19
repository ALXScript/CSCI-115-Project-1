#include"MyArray.h"
#include"SortingAlgs.h"
#include"Conditions.h"

using namespace std;

void resetAll(char &s, char &t, int &as) {
	s = 'z';
	t = 'z';
	as = 0;
}

void main()
{	
	//characters for selecting the types we want
	bool exit = false;
	char sort = 'z';
	char arrayType = 'z';
	int arraySize = 0;

	/*
	legend:
	e = Exit
	i = Insertion Sort
	s = Selection Sort
	b = Bubble Sort
	q = Quick Sort
	m = Merge Sort
	*/

	do
	{
		switch (sort)
		{
		//Exit
		case 'e':
			exit = true;
			break;

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
					//Insertion Sort for a Sorted Array of Size 10
					insSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 1000
				case 1000:
					insSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 10,000
				case 10000:
					insSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 100,000
				case 100000:
					insSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 1,000,000
				case 1000000:
					//Insertion Sort For a Sorted Array of Size 1,000,000
					insSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;
				
			//completely shuffled
			case 'h':
				switch (arraySize)
				{
				//size 10
				case 10:
					//Insertion Sort for a Completely Shuffled Array of Size 10
					insSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 1000
				case 1000:
					//Insertion Sort For a Completely Shuffled Array of Size 1,000
					insSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 10,000
				case 10000:
					//Insertion Sort For a Completely Shuffled Array of Size 10,000
					insSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 100,000
				case 100000:
					//Insertion Sort For a Completely Shuffled Array of Size 100,000
					insSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 1,000,000
				case 1000000:
					//Insertion Sort For a Completely Shuffled Array of Size 1,000,000
					insSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

			//reverse order
			case 'r':
				switch (arraySize)
				{
				//size 10
				case 10:
					//Insertion Sort for a Reverse Order Array of Size 10
					insSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 1000
				case 1000:
					//Insertion Sort For a Reverse Order Array of Size 1,000
					insSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 10,000
				case 10000:
					//Insertion Sort For a Reverse Order Array of Size 10,000
					insSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 100,000
				case 100000:
					//Insertion Sort For a Reverse Order Array of Size 100,000
					insSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 1,000,000
				case 1000000:
					//Insertion Sort For a Reverse Order Array of Size 1,000,000
					insSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

			//sorted and shuffled at 10%
			case 't':
				switch (arraySize)
				{
				//size 10
				case 10:
					//Insertion Sort for a Sorted and Shuffled at 10% Array of Size 10
					insSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 1000
				case 1000:
					//Insertion Sort For a Sorted and Shuffled at 10% Array of Size 1,000
					insSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 10,000
				case 10000:
					//Insertion Sort For a Sorted and Shuffled at 10% Array of Size 10,000
					insSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 100,000
				case 100000:
					//Insertion Sort For a Sorted and Shuffled at 10% Array of Size 100,000
					insSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//size 1,000,000
				case 1000000:
					//Insertion Sort For a Sorted and Shuffled at 10% Array of Size 1,000,000
					insSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

				//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

			//default UI
			default: cout << "\n\nPlease select the type of array you would like:\ns: Already Sorted\th: Completely Shuffled\nr: Sorted in Reverse Order\tt: Sorted and Shuffled at 10%\n";
				cin >> arrayType;
				break;
			}
			break;

		//Selection sort
		case 's':
			switch (arrayType)
			{
				//sorted
			case 's':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Selection Sort for a Sorted Array of Size 10
					selSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Selection Sort For a Sorted Array of Size 1,000
					selSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Selection Sort For a Sorted Array of Size 10,000
					selSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Selection Sort For a Sorted Array of Size 100,000
					selSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Selection Sort For a Sorted Array of Size 1,000,000
					selSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//completely shuffled
			case 'h':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Selection Sort for a Completely Shuffled Array of Size 10
					selSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Selection Sort For a Completely Shuffled Array of Size 1,000
					selSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Selection Sort For a Completely Shuffled Array of Size 10,000
					selSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Selection Sort For a Completely Shuffled Array of Size 100,000
					selSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Selection Sort For a Completely Shuffled Array of Size 1,000,000
					selSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//reverse order
			case 'r':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Selection Sort for a Reverse Order Array of Size 10
					selSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Selection Sort For a Reverse Order Array of Size 1,000
					selSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Selection Sort For a Reverse Order Array of Size 10,000
					selSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Selection Sort For a Reverse Order Array of Size 100,000
					selSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Selection Sort For a Reverse Order Array of Size 1,000,000
					selSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//sorted and shuffled at 10%
			case 't':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Selection Sort for a Sorted and Shuffled at 10% Array of Size 10
					selSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Selection Sort For a Sorted and Shuffled at 10% Array of Size 1,000
					selSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Selection Sort For a Sorted and Shuffled at 10% Array of Size 10,000
					selSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Selection Sort For a Sorted and Shuffled at 10% Array of Size 100,000
					selSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Selection Sort For a Sorted and Shuffled at 10% Array of Size 1,000,000
					selSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//default UI
			default: cout << "\n\nPlease select the type of array you would like:\ns: Already Sorted\th: Completely Shuffled\nr: Sorted in Reverse Order\tt: Sorted and Shuffled at 10%\n";
				cin >> arrayType;
				break;
			}
			break;

		//Bubble Sort
		case 'b':
			switch (arrayType)
			{
				//sorted
			case 's':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Bubble Sort for a Sorted Array of Size 10
					bubbleSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Bubble Sort For a Sorted Array of Size 1,000
					bubbleSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Bubble Sort For a Sorted Array of Size 10,000
					bubbleSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Bubble Sort For a Sorted Array of Size 100,000
					bubbleSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Bubble Sort For a Sorted Array of Size 1,000,000
					bubbleSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//completely shuffled
			case 'h':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Bubble Sort for a Completely Shuffled Array of Size 10
					bubbleSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Bubble Sort For a Completely Shuffled Array of Size 1,000
					bubbleSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Bubble Sort For a Completely Shuffled Array of Size 10,000
					bubbleSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Bubble Sort For a Completely Shuffled Array of Size 100,000
					bubbleSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Bubble Sort For a Completely Shuffled Array of Size 1,000,000
					bubbleSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//reverse order
			case 'r':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Bubble Sort for a Reverse Order Array of Size 10
					bubbleSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Bubble Sort For a Reverse Order Array of Size 1,000
					bubbleSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Bubble Sort For a Reverse Order Array of Size 10,000
					bubbleSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Bubble Sort For a Reverse Order Array of Size 100,000
					bubbleSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Bubble Sort For a Reverse Order Array of Size 1,000,000
					bubbleSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//sorted and shuffled at 10%
			case 't':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Bubble Sort for a Sorted and Shuffled at 10% Array of Size 10
					bubbleSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Bubble Sort For a Sorted and Shuffled at 10% Array of Size 1,000
					bubbleSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Bubble Sort For a Sorted and Shuffled at 10% Array of Size 10,000
					bubbleSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Bubble Sort For a Sorted and Shuffled at 10% Array of Size 100,000
					bubbleSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Bubble Sort For a Sorted and Shuffled at 10% Array of Size 1,000,000
					bubbleSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//default UI
			default: cout << "\n\nPlease select the type of array you would like:\ns: Already Sorted\th: Completely Shuffled\nr: Sorted in Reverse Order\tt: Sorted and Shuffled at 10%\n";
				cin >> arrayType;
				break;
			}
			break;

		//Quick Sort
		case 'q':
			switch (arrayType)
			{
				//sorted
			case 's':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Quick Sort for a Sorted Array of Size 10
					quickSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Quick Sort For a Sorted Array of Size 1,000
					quickSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Quick Sort For a Sorted Array of Size 10,000
					quickSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Quick Sort For a Sorted Array of Size 100,000
					quickSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Quick Sort For a Sorted Array of Size 1,000,000
					quickSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//completely shuffled
			case 'h':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Quick Sort for a Completely Shuffled Array of Size 10
					quickSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Quick Sort For a Completely Shuffled Array of Size 1,000
					quickSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Quick Sort For a Completely Shuffled Array of Size 10,000
					quickSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Quick Sort For a Completely Shuffled Array of Size 100,000
					quickSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Quick Sort For a Completely Shuffled Array of Size 1,000,000
					quickSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//reverse order
			case 'r':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Quick Sort for a Reverse Order Array of Size 10
					quickSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Quick Sort For a Reverse Order Array of Size 1,000
					quickSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Quick Sort For a Reverse Order Array of Size 10,000
					quickSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Quick Sort For a Reverse Order Array of Size 100,000
					quickSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Quick Sort For a Reverse Order Array of Size 1,000,000
					quickSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//sorted and shuffled at 10%
			case 't':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Quick Sort for a Sorted and Shuffled at 10% Array of Size 10
					quickSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Quick Sort For a Sorted and Shuffled at 10% Array of Size 1,000
					quickSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Quick Sort For a Sorted and Shuffled at 10% Array of Size 10,000
					quickSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Quick Sort For a Sorted and Shuffled at 10% Array of Size 100,000
					quickSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Quick Sort For a Sorted and Shuffled at 10% Array of Size 1,000,000
					quickSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//default UI
			default: cout << "\n\nPlease select the type of array you would like:\ns: Already Sorted\th: Completely Shuffled\nr: Sorted in Reverse Order\tt: Sorted and Shuffled at 10%\n";
				cin >> arrayType;
				break;
			}
			break;

		//Merge Sort
		case 'm':
			switch (arrayType)
			{
				//sorted
			case 's':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Merge Sort for a Sorted Array of Size 10
					mergeSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Merge Sort For a Sorted Array of Size 1,000
					mergeSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Merge Sort For a Sorted Array of Size 10,000
					mergeSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Merge Sort For a Sorted Array of Size 100,000
					mergeSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Merge Sort For a Sorted Array of Size 1,000,000
					mergeSortSorted(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//completely shuffled
			case 'h':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Merge Sort for a Completely Shuffled Array of Size 10
					mergeSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Merge Sort For a Completely Shuffled Array of Size 1,000
					mergeSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Merge Sort For a Completely Shuffled Array of Size 10,000
					mergeSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Merge Sort For a Completely Shuffled Array of Size 100,000
					mergeSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Merge Sort For a Completely Shuffled Array of Size 1,000,000
					mergeSortShuffled(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//reverse order
			case 'r':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Merge Sort for a Reverse Order Array of Size 10
					mergeSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Merge Sort For a Reverse Order Array of Size 1,000
					mergeSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Merge Sort For a Reverse Order Array of Size 10,000
					mergeSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Merge Sort For a Reverse Order Array of Size 100,000
					mergeSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Merge Sort For a Reverse Order Array of Size 1,000,000
					mergeSortReversed(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//sorted and shuffled at 10%
			case 't':
				switch (arraySize)
				{
					//size 10
				case 10:
					//Merge Sort for a Sorted and Shuffled at 10% Array of Size 10
					mergeSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1000
				case 1000:
					//Merge Sort For a Sorted and Shuffled at 10% Array of Size 1,000
					mergeSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 10,000
				case 10000:
					//Merge Sort For a Sorted and Shuffled at 10% Array of Size 10,000
					mergeSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 100,000
				case 100000:
					//Merge Sort For a Sorted and Shuffled at 10% Array of Size 100,000
					mergeSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//size 1,000,000
				case 1000000:
					//Merge Sort For a Sorted and Shuffled at 10% Array of Size 1,000,000
					mergeSortShuffled10(arraySize);
					resetAll(sort, arrayType, arraySize);
					break;

					//default UI
				default:
					cout << "\n\nPlease Select the amount of elements you would like to sort:\n10\t1000\t10000\n100000\t1000000\n";
					cin >> arraySize;
					break;
				}
				break;

				//default UI
			default: cout << "\n\nPlease select the type of array you would like:\ns: Already Sorted\th: Completely Shuffled\nr: Sorted in Reverse Order\tt: Sorted and Shuffled at 10%\n";
				cin >> arrayType;
				break;
			}
			break;

		//default UI
		default:
			cout << "\n\nWhat would you like to do?\ni: Insertion Sort\ts: Selection Sort\nb: Bubble Sort\tq = Quick Sort\nm: Merge Sort\te: Exit\n";
			cin >> sort;
			break;
		}
	} while (!exit);
	
}