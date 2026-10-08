/*This programme defines a class template for a custom-made array*/

#include "common.h"
#include <iostream> 
using namespace std; 

// Defining a class template
template <class a_type>
class myArray
{
private:
	a_type* ptr;
	int size;
public:
	  myArray(a_type arr[], int s)
	         { 
		       ptr = new a_type[s];
		       size = s;
		       for (unsigned int i = 0; i < size; i++) ptr[i] = arr[i];
	         };
	
	  ~myArray() {/*should there be anything here?*/ };
	
	  void print(); // This is a function prototype only

};



// Member fuction definition is here:
template <class a_type>    // We need to reepat this line because it is a different scope
void myArray<a_type>::print()
{
	for (unsigned int i = 0; i < size; i++)
		cout << " " << *(ptr + i) << endl;
};





int main() {
	
	int A[5]{ 1,2,3,4,5 };
	myArray<int> a(A, 5); // myArray of type integer

	char B[6]{ "Hello" };
	myArray<char> b(B, 5); // myArray of type character

	a.print();
	
	b.print();

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
};





	
	
