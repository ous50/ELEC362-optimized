//This programme reads two numbers in a bach mode and returns their product
#include "common.h"
#include <iostream> 
using namespace std;

double Product(double x, double y); // The functions prototype

int main(int argc, char* argv[]) {

	std::cout << " The number of arguments is " << argc << endl;

	// argv[0] is the name of the programme (first appearing word)
	// argv[1] is the second appearing word
	// argv[2] is the third appering word

	if (argc == 3) // Making sure the correct number of arguments is input
	{
		int x = *argv[1] - '0'; // This is needed to convert the charcter into an integer
		int y = *argv[2] - '0';

		// Calling the function
		double output = Product(static_cast<double>(x), static_cast<double>(y));

		std::cout << "The product is " << output << endl;
	}

	pause();

}

// the function's definition (this function computes the prodct of two doubles)
double Product(double x, double y)
{
	return x*y;
}
