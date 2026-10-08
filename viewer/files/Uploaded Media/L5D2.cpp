/*This programme has 3 functions to swap two variables, by value, by reference, and using pointers*/

#include "common.h"
#include <iostream> 
using namespace std;

// Functions declaration / prototypes:
void SwapByValue(int x, int y); // function declaration for swap function by value

void SwapByRef(int& x, int& y); // function declaration for swap function by reference

void SwapByPointers(int* px, int* py); // function declaration for swap function using pointers

int main() {

	int a = 1, b = 10; // Use for value and reference functions

	int *pa{ &a }, * pb{ &b }; // Use for pointer function

	cout << "Before: a = " << a << " b = " << b << endl;
	// Call the function
	SwapByValue(a, b);
	cout << "After: a = " << a << " b = " << b << endl;

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}

// Swap function by value
void SwapByValue(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}


// Swap function by reference
void SwapByRef(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}


// Swap function using pointers
void SwapByPointers(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
