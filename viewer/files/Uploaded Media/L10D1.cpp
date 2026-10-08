/*This programme allows the user to enter a sequence of numbers until 0 is entered then diplays them all*/
/* it does the same functionality as the code in L5D1.cpp but far more effeciently*/

#include "common.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> myvec; // declares an empty vector

	

	int x=1; // Initialise to get in the loop

	while (x) {
	
		cout << "Enter a number" << endl;
		cin >> x;

		myvec.push_back(x); // Adds an element to the end of the vector
	
	
	}

	
	cout << "The numbers entered were: ";
	   	
	for (unsigned int i = 0; i < myvec.size(); i++) cout << myvec[i] << " ";
	
	cout << "\n"; // A line break should be added so users may distinguish contents

	pause();
	/*NOTE: a vector's head is allocated on the stack while all its data are
			allocated on the heap. If you want to allocate everything on the heap
			 you should use "vector<int> *pmyvec=new vector<int>();"  but it is unusual*/

}
