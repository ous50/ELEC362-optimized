/*This programme appends a vector by zero for evey elemtn that is equal to 5*/


#include<iostream>
#include <iterator>
#include <vector>
using namespace std;

// This function causes vector invalidation
void Append5Broken(vector<int>& Input) {

	// going through all elements
	for (auto iter = Input.begin(); iter != Input.end(); iter++)
	{
		// If encountered a 5, add a zero element to the end of the vector
		if (*iter == 5) Input.push_back(0);

	}


};

// This function does not!!
void Append5Working(const vector<int>& Input, vector<int>& Output) {

	// creating  zero element for every 5 we have in the input vector
	for (auto iter = Input.begin(); iter != Input.end(); iter++)
	{
	if (*iter==5) Output.push_back(0);
	}
	
	// Adding the Input vector to the beginning of the Output vector
	Output.insert(Output.begin(), Input.begin(), Input.end());

};




void main() {

	vector < int >  numbers = { 1,2,5,3,5 };

	// This:
	Append5Broken(numbers);
	for (auto iter = numbers.begin(); iter != numbers.end(); iter++) cout << *iter << endl;


	// Or this:
	//vector<int> appended;
	//Append5Working(numbers,appended);
	//for (auto iter = appended.begin(); iter != appended.end(); iter++) cout << *iter << endl;

	




	system("pause");

};

