//This programme reads the value of x from the keyboard and prints it to the screen

#include <iostream> // This library defines input and output of variables for the programme

int main() {

	int x; // Declaring a variable

	std::cout << " Enter the value of x" << std::endl; // Output stream: from the programme to the screen, then starts a new line

	std::cin >> x; // Input stream: from the keyboard to the programme

	std::cout << "The value of x = " ; // Output stream: prints the value of x to the screen, then starts a new line
	                                               // Notice the alternative method of starting a new line 
	std::cout << x << "\n";

	system("pause"); // This statement prevents the programme from closing when it is finished executing (might not be needed on some compilers)

	return 0;
}