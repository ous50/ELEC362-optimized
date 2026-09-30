//This programme finds the length of a given word

#include <iostream> 
#include <string> // This library defines string handling for the programme

int main() { 

	std::string word; // Declaring a variable

	std::cout << " Enter a word to find its length" <<std::endl; 
	
	std::cin >> word; 

	std::cout << "The length of the word is:  " << word.length(); // the function "length()" operating on "word"
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
} 