//This programme explains the scope of variables by examples
#include "common.h"
#include <iostream> 
using namespace std; 

int count3{ 100 }; // global variable as it doesn't belong to any block

namespace mycount {  // This is a namespace

	int count2{ 40 };
}


int main() { 

	// This is a first scope
	int count1{ 10 }, count2{ 20 };
	int result1 = count1 + count2; // 30
	int result2 = count1 + count3; // 110
	{   
		// This is a second scope
		int count1{ 40 }, count3{ 30 };
		int result3 = count1 + count2; // 60 (count2 is not defined in the scope, so the compiler goes to a higher scope)
		int result4 = count2 + count3;// 50  
		int result5 = count1 + ::count3; // 140 (the ::count3 referes to the global scope)
		int result6 = count1 + mycount::count2; // 80 (count2 is now taken from "mycount" namespace)
		
		//Second scope ends here
	}
	int result7 = count1 + count3; // 110 

	
	// first scope ends here


	pause();	
	
} 