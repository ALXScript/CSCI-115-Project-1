#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "MyArray.h"

//using namespace std; 

/*
What has been done:
	1. Added swapElem and getElem function.

Needs Fixing:
	1. Everything looks fine to me but I'm getting a lot of errors saying "Illegal use of type 'void' ", syntax errors and a few others. Let me know if you get those too.
*/

template <typename T>
ourArray<T>::ourArray() {
	myArray = nullptr;
	size = 0;
}

template <typename T>
ourArray<T>::ourArray(int n) {
	myArray = new T[n];
	size = n;
}

template <typename T>
ourArray<T>::~ourArray() {
	delete[] myArray;
}

template <typename T>
int ourArray<T>::getSize() {
	return size;
}

template <typename T>
T ourArray<T>::getElem(int idx) {
	return myArray[idx];
}

template <typename T>
double ourArray<T>::getMean() {
	double sum;
	for (int i = 0; i < size; i++)
	{
		sum = myArray[i] + sum;
	}
	return sum / size;
}

template <typename T>
double ourArray<T>::getStDev() { 
	double sum1, sum2, mean1, mean2;
	for (int i = 0; i < size; i++) 
	{
		sum1 = myArray[i] + sum1;
	}
	mean1 = sum1 / size;
	for (int i = 0; i < size; i++) 
	{
		double ans = myArray[i] - mean1;
		sum2 = pow(ans, 2) + sum2;
	}
	mean2 = sum2 / size;
	return sqrt(mean2);
}

template <typename T>
void ourArray<T>::setElem(int idx, T item) 
{
	myArray[idx] = item;
}

template <typename T>
void ourArray<T>::swapElem(int a, int b) {
	T temp = myArray[a];
	myArray[a] = myArray[b];
	myArray[b] = temp;
}

//Shuffles using time to ensure randomness
template <typename T> 
void ourArray<T>::shuffle() {
	srand(time(NULL)); 
	for (int i = 0; i< size; i++) 
	{
		//mod size should give a number within range of array size
		T temp = myArray[i];
		myArray[i] = myArray[rand() % size];
		myArray[rand() % size] = temp;
	}
}

//reverses by swapping first elem and last elem and decrements/increments as necessary
template <typename T>
void ourArray<T>::reverse() { 
	T temp;
	for (int i = 0; i < size/2; i++) 
	{
		temp = myArray[i];
		myArray[i] = myArray[size - 1 - i];
		myArray[size - 1 - i] = temp;
	}
	
}

template <typename T>
void ourArray<T>::dispArr() {
	for (int i = 0; i < size; i++) {
		std::cout << myArray[i] << ", ";
	}
}