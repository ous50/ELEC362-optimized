/*This programme implements a basic event loop*/
#include<iostream>
#include<string>
using namespace std;

int main() {

	int ind = 1; // The control parameter
	int msg_ind = 4;

	string user_message;
	string messages[3]{ "user","date","exit" }; // This array includes all the "commands" in our programme 





	while (ind) {

		msg_ind = 5; // Re-initialise the message index

		cout << "Type a command: " << "\n";
		cin >> user_message;

		//Identifiying which message was input by the user:
		for (unsigned int i = 0; i < 3; i++)
		{
			if (user_message == messages[i]) msg_ind = i;
		};


		switch (msg_ind) {

		case 0:
		{   cout << "Mohammad Hasan" << "\n"; }
		break;

		case 1:
		{	cout << "30th of September" << "\n"; }
		break;

		case 2:
		{	ind = 0; }
		break;

		default:
		{	cout << "Unknown command" << "\n"; }
		break;


		};


	};





};