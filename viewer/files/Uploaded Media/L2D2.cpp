//This programme finds the length of a given word

#include "common.h"
#include <iostream> 
#include <string> // This library defines string handling for the programme

int main() { 

	std::string word; // Declaring a variable

	std::cout << " Enter a word to find its length" <<std::endl; 
	
	std::cin >> word; 

	std::cout << "The length of the word is:  " << word.length(); // the function "length()" operating on "word"
	
	std::cout << std::endl;
	
	pause();	//Replaced the original system("pause"); function so it may theoratically run on any platform

} 