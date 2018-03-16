//header file for making the arary template

/*This block of code is based off of Dr. Danyu's lab 2/13/18
  will fix later
*/
#define MY_ARRAY_H
#ifndef MY_ARRAY_H

template<typename T>
class Array {
public:
	Array();
	Array(int n);
	~Array();
	int getSize(); //inside should return size, should be an int
	double getMean(); //for calculation of Mean of alg runtime data stored in array
	double getStDev();// for calulating standard deviation of alg runtime data stored in array 
	void setElement(int idx, T item); //used to set an elem at index "idx" with arg "item"
	void shuffle();
	void reverse(); // reverses array
	void dispArr(); //for displaying smaller arrays to test and ensure they're sorted

private:
	int size;
	T* myArray;
};
#endif // MY_ARRAY_H