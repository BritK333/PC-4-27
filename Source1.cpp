//Brittany Kelley 
//October 8, 2017
//Programming Challenge 4-27


#include <iostream>
#include <string>
using namespace std;

int main () 
{
	string answer;

	cout << "Troubleshooting Bad Wi-Fi Connection\n" << endl;
	cout << "\nComplete each solution then respond to the following question with 'yes' or 'no':\n";
	
	cout << "\nReboot the computer and try to connect.\n";//Solution #1
	cout << "Did that fix the problem?\n";
	cin >> answer;
	if (answer == "yes") {
		return 0;
	}
	else if (answer == "no") {
		cout << "\nReboot the router and try to connect.";//Solution #2
	}
	cout << "\nDid that fix the problem?\n";
	cin >> answer;
	if (answer == "yes") {
		return 0;
	}
	if (answer == "no") {
		cout << "\nMake sure the cables between the router and modem are plugged in firmly.";//Solution #3
	}
	cout << "\nDid that fix the problem?\n";
	cin >> answer;
	if (answer == "yes") {
		return 0;
	}
	if (answer == "no") {
		cout << "\nMove the router to a new location and try to connect.";//Solution #4
	}
	cout << "\nDid that fix the problem?\n";
	cin >> answer;
	if (answer == "yes") {
		return 0;
	}
	if (answer == "no") {
		cout << "\nGet a new router. :(\n";//Solution #5 and Last Resort
	}

	system ("Pause"); 

}