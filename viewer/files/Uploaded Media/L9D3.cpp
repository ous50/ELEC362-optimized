/* This code shows an example os using a third party library in VS*/

#include "glew.h"
#include "common.h"
#include <iostream>
using namespace std;

int main() {

	GLenum err = glewInit(); // A class that belongs to GLEW library

	// Returns the installed version of GLEW library:
	cout<<"Status: Using GLEW "<< glewGetString(GLEW_VERSION)<<endl;

	
	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}