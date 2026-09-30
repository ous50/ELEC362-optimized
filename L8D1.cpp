/*This programme defines a class "ratio" and defines the division process for its objects*/

#include <iostream> 
using namespace std; 


class Ratio {

private:
	int num, denom;

public:
	Ratio(int n, int d) { num = n; denom = d; }

	void display() { cout << num << "/" << denom<<endl; };

	friend Ratio operator/ (Ratio a, Ratio b); //This function prototype defines the division process for the objects of type "Ratio"
};

 //Friend function (defining the division operator)
Ratio operator/ (Ratio a, Ratio b)

    {
	return Ratio(a.num * b.denom, a.denom * b.num);
    };

void main() {

	Ratio x(1, 2), y(2, 3);

	x.display();

	y.display();

	Ratio z = x / y;

	z.display();

	system("pause");

};




	
	
