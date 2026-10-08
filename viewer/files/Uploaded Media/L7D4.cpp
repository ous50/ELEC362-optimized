/*This programme adds the volumes of a sphere and a box*/

#include "common.h"
#include <iostream> 
using namespace std;

class Box; // The compiler needs to be aware of the existence of this class before it sees it for the first time in a function!!

class Sphere {

private:
	double radius;
public:

	Sphere(double R) : radius(R) {};

	~Sphere() {/*default destructor*/ };

	// This function is not a memeber function (i.e. should have no access to private memeber data)
	friend double TotalVolume(Box x,Sphere s);

};



class Box {

private:
	double width, length, height;
public:

	Box(double W, double H, double L) : width(W), length(L), height(H) {}; // Initialisation list constructor

	~Box() {/*default destructor*/ }

	// This function is not a memeber function (i.e. should have no access to private memeber data)
	friend double TotalVolume(Box x, Sphere s);


};


// This is the definition of the function
double TotalVolume(Box x,Sphere s) { return x.length * x.width * x.height+(4/3)*3.14*(s.radius*s.radius*s.radius); }



int main() {

	Box box1(2, 3, 4);

	Sphere s1(2);

	cout << "The volume of the box is " << TotalVolume(box1,s1) << endl;


	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}




