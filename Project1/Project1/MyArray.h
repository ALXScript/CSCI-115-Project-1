//header file for making the arary template
#ifndef MY_ARRAY_H
#define MY_ARRAY_H

#include <ctime>
#include <cstdlib>
/*
What Has been changed: 3/17 5:15pm
1. added a swap elements function and get element function to change array with alg functions
*/

template<typename T>
class ourArray {
public:
	ourArray();	//initial constructor of the array
	ourArray(int n);	//initial constructor of the array of n elements
	~ourArray();	//destructor
	int getSize(); //inside should return size, should be an int
	T getElem(int idx);	//gets the element at index idx
	double getMean(); //for calculation of Mean of alg runtime data stored in array
	double getStDev();// for calulating standard deviation of alg runtime data stored in array 
	void setElem(int idx, T item); //used to set an elem at index "idx" with arg "item"
	void swapElem(int a, int b); //swap elements in the array 
	void shuffle();	//shuffles the array
	void shuffle10();	//Takes sorted array and shuffles 10% of it
	void preSort(); // initializes array with 1- size
	void reverse(); // reverses array
	void dispArr(); //for displaying smaller arrays to test and ensure they're sorted

private:
	int size;
	T* myArray;
};

//what used to be  MyArray.cpp
/*
What has been done:
1. Added swapElem and getElem function.

Needs Fixing:
1. Everything looks fine to me but I'm getting a lot of errors saying "Illegal use of type 'void' ", syntax errors and a few others. Let me know if you get those too.
*/

//Initial constructor
template <typename T>
ourArray<T>::ourArray() {
	myArray = nullptr;
	size = 0;
}

//construct an array of size n
template <typename T>
ourArray<T>::ourArray(int n) {
	size = n;
	myArray = new T[size];
}

//destructor
template <typename T>
ourArray<T>::~ourArray() {
	delete[] myArray;
}

//returns the length of the array
template <typename T>
int ourArray<T>::getSize() {
	return size;
}

//Returns the element that is in the index of the array
template <typename T>
T ourArray<T>::getElem(int idx) {
	return myArray[idx];
}

//Gets the mean of all the elements in the array of the runtimes after n sized array with 100 iterations
template <typename T>
double ourArray<T>::getMean() {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = myArray[i] + sum;
	}
	return sum / size;
}

//Gets the Standard Deviation of all the elements in the array of the runtimes after n sized array with 100 iterations
template <typename T>
double ourArray<T>::getStDev() {
	double sum1 = 0, sum2 = 0, mean1, mean2;
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

//Sets T as the item in index idx of the array
template <typename T>
void ourArray<T>::setElem(int idx, T item)
{
	myArray[idx] = item;
}

//Swaps two elements from different indexes of the array
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
		int idx = rand() % size;
		T temp = myArray[i];
		myArray[i] = myArray[idx];
		myArray[rand() % size] = temp;
	}
}

//Shuffles the array and sorts it by 10%
template <typename T>
void ourArray<T>::shuffle10() {
	srand(time(NULL));
	for (int i = 0; i< size / 10; i++)
	{
		//mod size should give a number within range of array size
		int idx = rand() % size;
		T temp = myArray[i];
		myArray[i] = myArray[idx];
		myArray[idx] = temp;
	}
}

// Sets arrays elements in sorted order from 0 to size
template <typename T>
void ourArray<T>::preSort() {
	for (int i = 0; i < size; i++){
		myArray[i] = i;
	}
}
//reverses by swapping first elem and last elem and decrements/increments as necessary
template <typename T>
void ourArray<T>::reverse() {
	for (int i = 0; i < size; i++)
	{
		myArray[size - 1 - i] = i;
	}
	/*T temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = myArray[i];
		myArray[i] = myArray[size - 1 - i];
		myArray[size - 1 - i] = temp;
	}*/

}

//Displays the array
template <typename T>
void ourArray<T>::dispArr() {
	for (int i = 0; i < size; i++) {
		std::cout << myArray[i] << ", ";
	}
}

#endif // MY_ARRAY_H