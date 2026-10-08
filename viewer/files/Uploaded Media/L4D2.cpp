/*This programme fills a 20 elements array with random numbers and checks if their sum reached a given number
  it terminates by either the sum being met or the 20 eleemtns being filled*/

#include "common.h"
#include <iostream> 
#include <stdlib.h>   
#include <time.h> 
using namespace std; 

int main() { 

	int MinSum{ 100000 }; // The minimum sum we want
	int currentSum{ 0 }; // sum up to value 'i'
	unsigned int i{ 0 }; // index 
	int Array[20]; // declare 20 elements array
	srand(time(NULL)); // Initialise the random seed of the random generator

	// Loop part
	while ((currentSum < MinSum) && (i < 20))
	     // The body of the while loop
	     {
		     Array[i] = rand(); // initialization of the element i with a random number  
		     currentSum += Array[i]; 
		     i++;  
	      }

	// Output part
		if (currentSum > MinSum)
		{// If minimum is met
			cout << "Position " << i << " adds up to: " << currentSum << "\n";
		}
		else {// If minimum not met at end of array
			cout << "The total array is only" << currentSum << " and does  not reach the minimum sum " << "\n";
		}


	pause();	
	
} 