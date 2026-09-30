//This programme averages the power disspiated over three terminals in an IC.

#include <iostream> 
using namespace std;


void main() {

	const int NumberOfPins = 15; // Number of all the pins for this type of IC.
	unsigned int Pin1Power, Pin2Power, Pin3Power; // Declaring 3 variables for the power

	// Read power on pin 1:
	cout << "Dissipated power on pin 1 \n";
	cin >> Pin1Power;  // Initialisation

	// Student 2 mark entry
	cout << "Dissipated power on pin 2 \n";
	cin >> Pin2Power; // Initialisation

	// Student 3 mark entry
	cout << "Dissipated power on pin 3 \n";
	cin >> Pin3Power; // Initialisation

	// Calculating and diplaying average mark
	cout << "The average dissipated power is: " << (Pin1Power + Pin2Power + Pin3Power) / 3 << endl;

	system("pause");


}