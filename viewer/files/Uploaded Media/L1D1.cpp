//This programme displays the value of x

#include "common.h"
#include <iostream> // This is a statement

int main () { // This is the main block

    int x = 2; // Notice the semicolon

    std::cout <<"the value of x = "<< x << std::endl;

    pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
} // End of block (main block)