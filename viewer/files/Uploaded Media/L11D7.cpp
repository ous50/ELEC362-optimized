/*This programme shows how algortihms and functors are used*/

#include "common.h"
#include <iostream>
#include <algorithm> //To enable the code of using alogrithms
#include <functional> //To enable the code of using functors
#include <vector>
using namespace std;


int main() {

	

	vector<int> vec{ 0, 5, 2, 4, 3, 6, 5 };

	vector<int> a{ 1, 2 , 8};

	vector<int> b{ 4 , 3 , 6};

	vector<int> c{ 2,0,9 };

	sort(vec.begin(), vec.end()); // Algortihm to sorts elements 
	
	for (unsigned int i = 0; i <= 6; i++) cout << vec[i] << endl;

	auto p = lower_bound(vec.begin(), vec.end(), 5); //Algorithm returns the location of the first �5� in the vector
	cout <<"the first 5 in the vector is the element number "<< p - vec.begin() << endl;


    // Say we want to do c = a + b, how to do that?

        // "transform" is an algortihm while "plus<int>()" is a functor
	transform(a.begin(), a.end(), b.begin(), c.begin(), plus<int>()); 

	// Alternative way to sort vectors, "greater<int>()" is a functor

	sort(b.begin(), b.end(), greater<int>()); 
	
	vector <bool> d{ 1,1,0,1,0,1 };

	vector <bool> e{ 0,1,0,0,1,0 };

	vector <bool> f{0, 1, 0, 0, 1, 0};

	// Say we want to do c = a && b, how to do it?
	transform(d.begin(), d.end(), e.begin(), f.begin(), logical_and<bool>()); // "logical_and<bool>()" is a functor


	   	  
	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
};

