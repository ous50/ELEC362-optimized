//This programme reads a file and writes to a file

#include "common.h"
#include <iostream> 
#include <string> 
#include <fstream> // This library defines string handling from files for the programme
using namespace std; // This line is written to avoid repeating std:: (more about it in lecture 3)


int main() {

	/* the following set of statements reads the contents of a file called "example.txt" and show them on the screen
	   the file must be in the same folder as the cpp file */

	string line;

	ifstream myfile("example.txt"); // This defines the file input stream (i.e. the input file to read)

	getline(myfile, line); // Reads a line from the file and put it into the variable "line"

	cout << line << '\n';   // Prints the variable line then moves te curser into a new line


	myfile.close(); // Closes the file after finishing 

	/* the following set of statements writes a file called "newfile.txt"
	   the file will be in the same folder as the cpp file */

	ofstream newfile("newfile.txt"); // This defines the file output stream (i.e. the file to be written/created)

	newfile << "This is one line.\n";
	newfile << "This is another line.\n";
	newfile.close();

	system("pause");
	// pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}
