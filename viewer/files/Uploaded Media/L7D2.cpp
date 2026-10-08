/*This programme shows how multiple constructors can be used in a class
  It creates a class "Ratio" used to define fractions*/

#include "common.h"
#include <iostream> 
#include <string>
using namespace std; 


class Ratio {

private:
	int num, denom;

public:
	Ratio() { num = 0; denom = 1; }
	Ratio(int n) { num = n; denom = 1; }
	Ratio(int n, int d) { num = n; denom = d; }
	void print() { cout << num << "/" << denom << endl; }
};

int main() {
	Ratio x, y = 2, z(22, 5); // Different argument passing methods
	
	x.print();
	
	y.print();
	
	z.print();

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}


	
	
