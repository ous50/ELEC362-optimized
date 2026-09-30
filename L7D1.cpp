/*This programme shows how the constructor is used in a class*/

#include <iostream> 
#include <string>
using namespace std; 


class Box{

private:
	// define member data:
	double length, width, height;

   public:
	   // constructor (notice that it has no return type):
	   Box(double L, double W, double H)
	   {	 length = L; width = W; height = H;}

	   double BoxVolume() 
	   { return height * width * length; } 

};



void main() { 

	Box myBox(2,3,4); // The arguments 
	
	

	cout << "The volume of my box is " << myBox.BoxVolume()<<endl;

	system("pause");
}

	
	
