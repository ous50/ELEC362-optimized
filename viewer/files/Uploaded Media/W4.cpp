#include<iostream>
#include<chrono>
using namespace std;

// function to do the dynamic memory allocation
double* push_back(double* pArray, int& size, double element);

int main() {
    
    int size = 0; // the size of the array
    double input = 1;  // Initialize input

    // Define the array to store the elemetns here
    double* pdynArray = new double[size];
    

    while (cin >> input) {

        pdynArray = push_back(pdynArray,size,input);

        
    }

    // Display the output 
    if (size > 0) {
        for (int i = 0; i < size; i++) {
            cout << pdynArray[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "No input provided." << endl;
    }
    // Don' t forget to clean up
    delete[] pdynArray;

    return 0;


};

double* push_back(double* pArray, int& size,double element)
{
    // Define a local temporary array for copying
    size++;
    double* pLocalArray = new double[size];

    // first element requires different treatment:
    if (size == 1) {
               
        pLocalArray[0] = element;
     }
    // If the array has elements in it (i.e. non-zero size) we do the copying
    else {

        int index = 0;
        for (; index < size-1; index++) pLocalArray[index] = pArray[index];

        pLocalArray[index] = element; // Adding the kast element to the array

     }


    // the original array is no longer of use to us!!
    delete[] pArray; 

    // Return the local array as the new array
    return pLocalArray;


}
