#include"MyArray.h"
#include<cstdlib>
#include<iostream>

using namespace std;

void main()
{


	char input;
	/*
	legend:
	e = exit
	i = insertion sort
	s = selection sort
	b = bubble sort
	q = quick sort
	m = merge sort
	*/

	

	while (input != 'e')
	{
		switch (input)
		{
		case 'i':
			break;
		case 's':
			break;
		case 'b':
			break;
		case 'q':
			break;
		case 'm':
			break;
		default:
			cout << "\n\nWhat would you like to do?\ni: Insertion Sort\ts: Selection Sort\nb: Bubble Sort\tq = Quick Sort\nm: Merge Sort\te: Exit\n";
			cin >> input;
			break;
		}
	}
}