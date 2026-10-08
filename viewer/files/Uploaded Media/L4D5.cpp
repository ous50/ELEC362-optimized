/*This programme creates a series of fraction based on the user's input*/

#include "common.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	double Numerator,Fraction;
	string Input;
	
	// Asking the user for the numerator as the input
	cout << " Input a nmber as the numerator: ";
	cin >> Input;
	try {// This block might have a run-time error
		Numerator = stod(Input);
 	    }

	// This catch block handles the previous error
	catch (const invalid_argument& e) {
		cerr << "Invalid argument: " << e.what() <<endl;

		return -1; // This prematurly ends the programm because a fatal error occured
	}


	// Assuming the denomerator will be each of the following numbers:
	double Denomerator[8]{ 5,2,6,0,3,6,1,4 };

	
	// The loop computes a fracion for every number in the array "Denomerator"
	for (unsigned int i = 0; i < 8; i++)
	{
		try { // This block might have a run-time error
			if (Denomerator[i] == 0) throw "Error division by 0"; // This is a custom-made exception (the name of the exception is the message)
			Fraction = Numerator / Denomerator[i];
			cout << Fraction << "\n";
		}


		catch (const char aMessage[]) // This block is called when exception 1 occurs
		{
			cerr << "Exception 1 is thrown" << "\n"; // Notice the use of cerr for displaying errors
			return -2; // The return number is different here to indicate different error
		}

		
		catch (...) // This is a general catch block called for anything else (not recommended)
		{
			cerr << "Another exception is thrown" << "\n"; // Notice the use of cerr for displaying errors
		}


	}

	

	pause();
}



