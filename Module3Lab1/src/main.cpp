//
// main.cpp
// Module3Lab1
// Created by Ian Rohan on 9/20/2022
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main() {
	// Set up Variables
	string myName;
	string myAddress;
	string myCity;
	string myState;
	int myZipCode;

	// Request Information
	cout << "Enter full name" << endl;
	getline(cin, myName);
	cout << "Enter address" << endl;
	getline(cin, myAddress);
	cout << "Enter city" << endl;
	getline(cin, myCity);
	cout << "Enter state" << endl;
	getline(cin, myState);
	cout << "Enter zip code" << endl;
	cin >> myZipCode;

	// Return Information
	cout <<"\n\n" << myName << endl;
	cout << myAddress << endl;
	cout << myCity << ", " << myState << ", " << myZipCode << endl;

	return 0;
}
