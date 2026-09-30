//This programme gives the user the options to output the value of x, y, or x by y
#include <iostream> 
using namespace std; 

void main() { 

	char option_code; // Variable used to choose from the menu
	
	double x = 5.0, y = 10.0;
	
	cout << " 1. Print value of x\n";
	
	cout << " 2. Print value of y\n";

	cout << " 3. Print value of xy\n";
	
	cin >> option_code;

	// Switch-case strcuture: decides what to do based on the input
	switch (option_code)
	{
		case '1': // Pay attention to the quotation marks used for character type
		cout << "x=" << x << "\n";
		break;
	
		case '2':
		cout << "y=" << y << "\n";
		break;
	
		case '3':
		cout << "x*y = " << x * y << "\n";
		break;

	
		default: cout << "Unrecognized option\n"; // When the option is unavailable this is called
		break;


	}

	system("pause");
	
	
} 