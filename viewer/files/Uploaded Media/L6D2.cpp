/*This programme shows how to define an object of the struct Book*/

#include "common.h"
#include <iostream> 
#include <string>
using namespace std; 

// Defining a structure Book
struct Book // definition book structure
{
	// Elements inside Book (Data members)
	int ISBN;
	string author;
	int numberOfPages;
	int yearPublished;

	//Historically structs did not allow having memeber functions, modern C++ allows it

};






int main() { 

	Book boringBook; // create book
	
	boringBook.author = "Man"; // author of the book
	
	boringBook.numberOfPages = 1785; // number of pages
	
	boringBook.yearPublished = 2021; // year published

	cout << "The book is authored by " << boringBook.author << " and was published in " << boringBook.yearPublished<<endl;

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}

	
	
