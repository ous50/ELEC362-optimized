/*This programme defines a class "ratio" and allows us to test if the two ratios are equal*/

#include "common.h"
#include <iostream> 
using namespace std;


class Ratio {

private:
	double num, denom;

public:
	Ratio(double n, double d) { num = n; denom = d; }

	//This function defines the "==" operator
	bool operator==(Ratio OtherRatio)
	{
		bool isEqual = false; // flag vairable to hold the output

		// The fraction of the object making the call ( on the left hand side)
		double fraction = this->num / this->denom;

		// the Fraction to be compared to (on the right hand side)
		double OtherFraction = OtherRatio.num / OtherRatio.denom;

		if (fraction == OtherFraction) { isEqual = true; }

		return isEqual;

	};
};



int main() {

	Ratio x(1, 2), y(2, 4);

	if (x == y) cout << "Yes they are equal" << endl;
	else cout << "No they are not" << endl;

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
};






