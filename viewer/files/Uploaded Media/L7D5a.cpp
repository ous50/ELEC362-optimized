/*This programme shows how dynamic memory can be used when dealing with objects and classes*/
// Memory inefficient version 

#include "common.h"
#include <iostream> 
using namespace std;


class Box
{
private:
	double pL, pW, pH;   // Memeber data declaration 
public:
	Box(double L, double W, double H) 
	{ 
		pL = L;
		pW = W;
		pH = H;
	}
	~Box()
	{
		
	}

	double boxVolume() { return (pL) * (pW) * (pH); }
};


int main() {

	double x = 2, y = 3, z = 4;

	Box mybox(x, y, z);  


	cout << mybox.boxVolume() << endl;

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}





