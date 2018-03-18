//header file for making the arary template
#ifndef MY_ARRAY_H
#define MY_ARRAY_H
/*
What Has been changed: 3/17 5:15pm
1. added a swap elements function and get element function to change array with alg functions
*/

template<typename T>
class ourArray {
public:
	ourArray();
	ourArray(int n);
	~ourArray();
	int getSize(); //inside should return size, should be an int
	T getElem(int idx);
	double getMean(); //for calculation of Mean of alg runtime data stored in array
	double getStDev();// for calulating standard deviation of alg runtime data stored in array 
	void setElem(int idx, T item); //used to set an elem at index "idx" with arg "item"
	void swapElem(int a, int b); //swap elements in the array 
	void shuffle();
	void reverse(); // reverses array
	void dispArr(); //for displaying smaller arrays to test and ensure they're sorted

private:
	int size;
	T* myArray;
};
#endif // MY_ARRAY_H