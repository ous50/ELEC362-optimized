/*This programme shows how a destructor is used in a class*/

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
	void print() { cout << num << " / " << denom << endl; }

	~Ratio() { // This is the destructor, notice it has no return type just like constructor
		      cout << "Object is destructed" << endl;
              }

};

int main() {
	Ratio y = 2, z(22, 5); // Different argument passing methods
	
	    { Ratio x; // Why is this scope defined??
	
	     x.print(); }

	y.print();
	
	z.print();

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}


	
	
