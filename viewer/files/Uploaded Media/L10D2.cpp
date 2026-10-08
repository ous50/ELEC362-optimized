/*This programme shows how vectors can be used in a programme*/

#include "common.h"
#include <iostream> 
#include <vector> // To enable the code to use "vector" container
using namespace std; 


class Box {

protected: // To grant access to sub classes
	double length, height, width;

public:

	Box(double L, double H, double W) : length(L), height(H), width(W) {};

	double boxVolume() { return length * height * width; }
};





int main() {
	
	// Declatring a vector of integers and adding an element to its end
	  
	  vector<int> mydata; // declare vector (of integers)

	  mydata.push_back(123); // adds 123 as last element


    // Declaring a vector of characters and assigning its second element

	  vector<char> moreData(100); // declare vector with 100 elements

	  moreData[2]='h';// sets element 2 to a value of �h�

    // Declaring a vector of "Box" objects and initialise them to B(1,2,3)

	  Box B(1, 2, 3);

	  vector<Box> lotsOfBoxes(100, B); // 100 boxes with the value of B(1,2,3).

    // Showing the capacity of a vector
	
	  vector<int> someData{ 345, 456, 567, 678 };
	  
	  auto s = someData.size(); // 4 elements
	  
	  auto c = someData.capacity(); // usually equal to the size
	  
	  cout << "The size is: "<< s << " and the capacity is: "<<c<<endl;
	  
	  // Preallocated vector
	  vector<int> newdata;
	  
	  newdata.reserve(100); // pre-allocation is much faster!!
	  
	  s = newdata.size(); 

	  c = newdata.capacity(); 

	  cout << "The size is: " << s << " and the capacity is: " << c << endl;




	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
};





	
	
