/* This code shows an example os using a third party library in VS*/

#include "glew.h"
#include <iostream>
using namespace std;

int main() {

	GLenum err = glewInit(); // A class that belongs to GLEW library

	// Returns the installed version of GLEW library:
	cout<<"Status: Using GLEW "<< glewGetString(GLEW_VERSION)<<endl;

	
	system("pause");

}