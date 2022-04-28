#include "inout.h"
#include <fstream>

inout::inout() {
	// TODO Auto-generated constructor stub

}

void inout::rgstr(string username, string password)
{
	ofstream myfile;
	myfile.open("userpass.txt", ios::app);

	myfile << username << "\n";
	myfile << password << "\n";

	myfile.close();
}

bool inout::login(string username, string password)
{
	string line;
	int count = 0;
	bool allgood = false;

	ifstream myfile;

	myfile.open("userpass.txt");

	while(getline(myfile, line))
	{
		count++;

		if(count == 1)
		{
			if (line == username)
			{
				allgood = true;
			}
		} else if (count == 2) {
			if (line == password)
			{
				break;
			} else if (allgood == false){
				count = 0;
			} else {
				allgood = false;
				break;
			}
		}
	}

	myfile.close();

	if (allgood)
	{
		return true;
	} else {
		return false;
	}
}
