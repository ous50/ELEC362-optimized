/*This programme gives an example of vector-specific iterators*/

#include <iostream>
#include <vector>
using namespace std;

void main() {

	vector<int> vec{ 0, 5, 2, 4, 3, 6, 5 };

	for (auto iter = begin(vec); iter != vec.end(); ++iter) cout << *iter << " ";

	//Accessing elements of a vector
	vector<int>::iterator iter = vec.begin(); // Specifying the datatype of the iterator (iter points to the first element in vec)

	// Equivalent to iter=iter+3; 
	advance(iter, 3); // Note that "advance" is also an iterator

	cout << *iter << " "; // iterators can be treated as pointers (use dereference operator to get the value of the element) 



	system("pause");
}
