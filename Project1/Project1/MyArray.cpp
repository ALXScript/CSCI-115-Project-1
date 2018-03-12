#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "MyArray.h"

using namespace std; 

template <typename T> Array<T>::Array() {
	myArray = nullptr;
	size = 0;
}
template <typename T> Array<T>::Array(int n) {
	myArray = new T[n];
	size = n;
}
template <typename T>Array<T>::~Array() {
	delete[] myArray;
}
template <typename T> int Array<T>::getSize() {
	return n;
}
template <typename T> double Array<T>::getMean() {
	double sum;
	for (int i = 0; i < size; i++) {
		sum = myArray[i] + sum;
	}
	return sum / size;
}
template <typename T> double Array<T>::getStDev() { 
	double sum1, sum2, mean1, mean2;
	for (int i = 0; i < size; i++) {
		sum1 = myArray[i] + sum1;
	}
	mean1 = sum1 / size;
	for (int i = 0; i < size; i++) {
		double ans = myArray[i] - mean1;
		sum2 = pow(ans, 2) + sum2;
	}
	mean2 = sum2 / size;
	return sqrt(mean2);
}
template <typename T> void Array<T>::setElem(int idx, T item) {
	myArray[idx] = item;
}
template <typename T> void Array<T>::shuffle() { //shuffles using time to ensure randomness
	srand(time(NULL)); //for some reason theres an error without specifying "std::time()" even though using namespace. Will Fix this.
	for (int i = 0; i< size; i++) {
		swap(myArray[i], myArray[rand() % size]); //mod size should give a number within range of array size
	}
}
template <typename T> void Array<T>::reverse() { //reverses by creating a new array and setting myArray = to new array 
	T temp;
	for (int i = 0; i < size/2; i++) {
		temp = myArray[i];
		myArray[i] = myArray[size - 1 - i];
		myArray[size - 1 - i] = temp;
	}
	
}
template <typename T> void Array<T>::dispArr() {
	for (int i = 0; i < size; i++) {
		cout << myArray[i] << ", ";
	}
}

