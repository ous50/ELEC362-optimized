/*This programme shows how dynamic memory can be used when dealing with objects and classes*/
// Memory efficient version 

#include <iostream> 
using namespace std;


class Box
{
private:
	double* pL, * pW, * pH;   // Pointers declaration 
public:
	Box(double& L, double& W, double& H) // 2: Pass paramters by reference to the constructor
	{// 3: Use pointers/reference to manipualte data memebers in the class 
		pL = new double(L);
		pW = new double(W);
		pH = new double(H);
	}
	~Box()
	{
		delete pL; delete pW; delete pH; // Don't forget to free memory when delteing an object in the destructor
	}

	double boxVolume() { return (*pL) * (*pW) * (*pH); }
};


void main() {

	double x = 2,y=3,z=4;

	Box* mybox = new Box(x, y, z); // 1: Define the object on the heap 


	cout << mybox->boxVolume() << endl;

	delete mybox;

	system("pause");
}





