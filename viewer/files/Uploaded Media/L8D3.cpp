/*This programme defines a class "ratio" and defines the output stream for its objects*/

#include "common.h"
#include <iostream> 
using namespace std; 


class Ratio {

private:
	int num, denom;

public:
	Ratio(int n, int d) { num = n; denom = d; }

	// Reference is used to make sure that the output stream is continuous ( takes the ostream& input, add a to it, and that is the ostream& output)
	friend ostream& operator<<(ostream& ostr, Ratio a);
};


ostream& operator<<(ostream& ostr, Ratio a)
{
	return ostr << a.num << '/' << a.denom;
};

int main() {
	
	Ratio x(1, 2);

	cout << x << endl; // You can't use this line without overloading the << operator

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
};





	
	
