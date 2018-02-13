//header file for making the arary template

/*This block of code is based off of Dr. Danyu's lab 2/13/18
  will fix later
*/
template<typename T>
class Array {
public:
	Array();
	~Array();
	getSize(); //inside should return size, should be an int

private:
	int size;
	T *myArray
};