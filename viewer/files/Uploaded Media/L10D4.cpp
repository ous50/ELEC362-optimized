/*This programme creates a phonebook usng "map" container and shows how to add/retireve entries to it*/

#include "common.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	/* Creating the phoneBook*/

	map <string, string> phoneBook; // First is the key datatype, the second is the data datatype

	/* creating entries and inserting them*/

	using Entry = pair <string, string>; // "pair" is a class used to attach data entry to a given key

	Entry entry1 = { "Bob Geldof","678901" };

	phoneBook.insert(entry1);
	//or
	phoneBook["Bob Dylan"] = "623520";

	/* Retriving the entry*/
	string callNumber; // To save the phone number we want to get from the phonebook

	string key; // the key used to find the entry

	cout << "Ente the person's name: " << endl;

	getline(cin, key);  // didn't use "cin >>" beacuse it only reads one word


   // Check if the entry exists in the phoneBook
	if (phoneBook.find(key) != phoneBook.end())
	{
		callNumber = phoneBook.find(key)->second; // "second" is a memmeebr function of the class "pair"
		//or:
		callNumber = phoneBook[key];

		cout << "The requested phone number is: " << callNumber << endl;

	}

	else
	{
		cout << "Entry not found" << endl;
	};

	pause(); //Replaced the original system("pause"); function so it may theoratically run on any platform
};
