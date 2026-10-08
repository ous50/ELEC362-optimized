//This programme shows to deal with arrays and size_t datatype
#include "common.h"
#include <iostream>
using namespace std;


int main() {

	const int arraySize= 4; // Number of cells in the array
	double Array[arraySize] = { 2.1,5.6,-2.3 };

	// Can this work?
	/*
	   int inputSize;
	   cin >> inputSize;
	   double Array[inputSize];

	   // Wait until Lecture 5 to find out how to handle dynamic arrays!
     	
	*/

	// size_t OutputSize = _countof(Array); // This function "_countof()" may not work on all compilers since it is MSVC macro of the following code.
												// https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/countof-macro.
	size_t OutputSize = (sizeof(Array) / sizeof(Array[0]));

	cout << " The size of the array is " << OutputSize << endl;
	
	pause();

}