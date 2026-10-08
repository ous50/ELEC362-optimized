/*This programme shows how to define an object of the class Traingle*/

#include "common.h"
#include <iostream> 

using namespace std; 

// Defining a class Traingle
class Triangle {

private: 
	double a, b, c, s;  // Properties or member data

public:
	// Methods or member functions
	void SetSides(double x,double y, double z) { a = x; b = y; c = z; s = (a + b + c) / 2.0; };
	
	// Function to calculate the Perimeter of the Traingle
	double CalcPerimeter()
	       {
		    return (a + b + c);
	        };

	// Function to calculate the Area of the Traingle
	double CalcArea()
	      {
		   return sqrt(s*(s - a) * (s - b) * (s - c)); // Heron's formula
	      };

};





int main() { 

	Triangle t;

	double x = 2, y = 2, z = 3;

	t.SetSides(x, y, z); // Calling the function "SetSides" that belongs to the object "t"

	cout << t.CalcPerimeter() << endl; // Displaying the output of calling the function "CalcPerimeter" that belongs to the object "t"

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}

	
	
