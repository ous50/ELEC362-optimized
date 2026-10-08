/*This programme shows how smart pointers are used in a code*/

#include "common.h"
#include <iostream>
#include <memory>
#include <string>
using namespace std;


int main() {



	string* pSong = new string("Nothing on You"); // Raw pointer

	string* pSong2 = new string("Nice for what");

	unique_ptr<string> s_pSong1(new string("Nothing on You")); //Smart unique pointer


	shared_ptr<string> s_pSong2(pSong2); //Casting a raw pointer into a shared pointer

	auto Song3 = s_pSong2; //This is allowed now!

	//s_pSong2 = s_pSong1; This will give an error, why?

	delete pSong, pSong2; // We don't need to do that for s_pSong2

	cout << *s_pSong1 << endl;





	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
};

