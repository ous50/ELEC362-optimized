/*This programme shows an example of derving class "Cube" from class "Box" */

#include "common.h"
#include<iostream>

using namespace std;

class Box {

protected: // To grant access to sub classes
	double length, height, width;

public:
	
	Box(double L, double H, double W) : length(L), height(H), width(W) {};
	
	double boxVolume() { return length * height * width; }
};

class Cube : public Box { // Means public and protected memebrs are the same in the sub class as in super class

public: 
	Cube(double s) : Box(s, s, s)   // The constructor of the sub class has to construct an object of the super class 
	{		 length = s, height = s; width = s;
     }
};


int main() {

	Cube x(5);

	cout << "The volume of the cube is " << x.boxVolume() << endl;

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}; 