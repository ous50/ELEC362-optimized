/*This programme shows how lists can be used in a programme*/

#include <iostream>
#include <list> // To enable the code to use "list" from STL
#include <vector>
using namespace std;

void main() {

	list<int>  data(20, 1); // create list of 20 elements all filled with integer ones

	data.insert(++data.begin(), 42);//inserts “42” in the second location

	data.sort(); // sort ascending

	data.remove(42); // removes elements “42”

	data.unique();// remove duplicate elements

	list<int> newdata{ 4, 5, 6 };
	data.splice(++data.begin(), newdata); // transfers “newdata” elements to “data” starting at the second element


	//cout << data[2] << endl; // Why doesn't this line work?


	data.clear(); // clear all data and set the list to 0 length


	system("pause");
};







