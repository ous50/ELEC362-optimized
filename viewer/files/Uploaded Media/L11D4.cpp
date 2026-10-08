/*This programme uses insert iterator to violate insertion rules for a vector*/

// A vector of 100 zeros has numbers inserted in its middle
#include "common.h"
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;


int main() {

	vector < int >  numbers(100, 0);

	cout << "The size of the vector is " << numbers.size() << endl;

	insert_iterator<vector < int >> iterInsert{ numbers , begin(numbers) + 5 }; // iterator pointing to the 6th element of vector numbers

	for (unsigned int i{ 0 }; i < 90; i++)
	{ // insert i starting from the sixth element
		*iterInsert = i;
	}

	cout << "The size of the vector is " << numbers.size() << endl;

	for (unsigned int i{ 0 }; i < numbers.size(); i++)
	{
		cout << numbers[i];
	}

	cout << endl;


	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
};

