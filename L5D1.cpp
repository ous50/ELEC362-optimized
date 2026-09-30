/*This programme allows the user to enter a sequence of integers with unknown length terminated by 0 */
#include<iostream>
using namespace std;

void main() {

	int index = 0; 
	int size = 1; // Size of the array at a given iteration
	int input = 1 ;

	int* pdynArray=nullptr; // Declaring the dynamic array
	int* ptempArray=nullptr; // Declaring the temporary array 

	pdynArray = new int[size]; // Setting the size of the array to 1


	while (input) {

		cout << "Enter an integer: " << "\n";
		cin >> input;

		pdynArray[index]=input; 

		size++;
		index++;

		ptempArray = new int[size]; // Allocating (size + 1) for extension

		// Copying the content of the dynamic array to the temporary array
		for (unsigned int i = 0; i < size-1; i++) ptempArray[i] = pdynArray[i];
		
		// Delete the dynamic array and rename the temporary array to be the new dynamic array	   
		delete[] pdynArray;
		pdynArray = nullptr;
		pdynArray = ptempArray;
		ptempArray = nullptr;


		


	};

	// Printing the integers
	cout << "Typed integers were" << "\n";
	for (unsigned int i = 0; i < size-1; i++) cout << pdynArray[i] << " ";
	cout << "\n";


	



	system("pause");


};