//This programme shows to deal with arrays and size_t datatype
#include <iostream> 
using namespace std;


void main() {

	const int size= 4; // Number of cells in the array
	double Array[size] = { 2.1,5.6,-2.3 };

	// Can this work?
	/*
	   int inputSize;
	   cin >> inputSize;
	   double Array[inputSize];

	   // Wait until Lecture 5 to find out how to handle dynamic arrays!
     	
	*/

	size_t OutputSize = _countof(Array); // This function "_countof()" may not work on all compilers

	cout << " The size of the array is " << OutputSize << endl;
	
	system("pause");


}