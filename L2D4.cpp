//This code shows the difference between a stringstream and a stream

#include <iostream> 
#include <string>
#include <sstream> // This is the String stream library


int main() {

    std::string  Sentence = "How is it going?";

    std::stringstream StringStream(Sentence); // Defining the string stream from the string

    std::cout << Sentence.at(0) << std::endl; // Outputting the first element in the string

    // Outputing the first element in the string stream
    std::string Word; // a temporary variable to hold the output
    
    StringStream >> Word; // Puts the first element from StringStream into Word
    
    std::cout << Word << std::endl; // Output Word 

    return 0;
}