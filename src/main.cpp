#include <iostream>
#include "inout.h"

using namespace std;

int main() {

	inout io;

	string username;
	string password;

	bool contu = false;
	bool accept = false;
	int given;

	while(contu == false)
	{
		cout << "--------HOME SCREEN--------" << endl;
		cout << "1. Login" << endl;
		cout << "2. Register a new account" << endl;

		cout << endl;

		cout << "Your selection: ";
		cin >> given;

		cout << endl;
		cout << endl;

		switch (given) {
			case 1: {
				int attempts = 0;
				string ans;

				cout << "-----LOGIN------" << endl;

				cout << "Username: ";
				cin >> username;
				cout << "Password: ";
				cin >> password;

				cout << endl;

				accept = io.login(username, password);

				while(accept == false)
				{
					if (attempts < 3)
					{
						attempts++;

						cout << "try again" << endl;

						cout << endl;

						cout << "Username: ";
						cin >> username;

						cout << "Password: ";
						cin >> password;

						accept = io.login(username, password);

						cout << endl;
					} else {
						cout << "--------HOME SCREEN--------" << endl;
						cout << "1. Login" << endl;
						cout << "2. Register a new account" << endl;

						cout << endl;

						cout << "Your selection: ";
						cin >> given;

					}




					/*
					attempts++;

					if(attempts == 4)
					{

					}

					// if 3 attempts prompt to create an account
					cout << "Error: a or 3 attempts" << endl;
					cout << "Enter again" << endl;
					cin >> ans;

					if(ans == "3")
					{
						accept = true;
					} else {
						cout << "Username: ";
						cin >> username;
						cout << "Password: ";
						cin >> password;

						cout << endl;

						accept = io.login(username, password);
					}
					*/
				}

				contu = true;

				break;
			}

			case 2: {
				string username;
				string password;

				cout << "------REGISTER------" << endl;
				cout << "Enter a username: ";
				cin >> username;
				cout << "Enter a password: ";
				cin >> password;

				io.rgstr(username, password);

				cout << endl;
				cout << endl;

				break;
			}
		}
	}

	cout << "Congratulations! You've successfully logged in." << endl;

	return 0;
}