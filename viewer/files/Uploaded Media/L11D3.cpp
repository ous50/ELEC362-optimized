/*This programme reads the second word in an input stream*/

#include "common.h"
#include <iostream>
#include <iterator>
using namespace std;

int main() {


	/* This part of code captures the second inserted word and displays it (notice that there is no cin here!!)*/

	cout << "Enter a sentence here: "; // Input three words at least

	istream_iterator<string> stream_begin{ cin }; // Iterator pointing to the beginnng of the input stream (first word)

	istream_iterator<string> stream_end; // Iterator pointing to the end of the input stream (last word)

	if (stream_begin == stream_end) // Check if there is a second word
		cout << "There is no second word" << endl;

	else cout << "The second word is " << *(++stream_begin) << endl;



	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
}
