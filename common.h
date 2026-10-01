#ifndef COMMON_H
#define COMMON_H

#include<iostream>

// This function replaces the original system("pause") so it theoretically may run on any platforms.
void pause() {
    std::cout << "Press Enter to continue...\n";

    // Wait for the user to press Enter
    std::cin.get();
}

#endif