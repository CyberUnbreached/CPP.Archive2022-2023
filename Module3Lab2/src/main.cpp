//
// main.cpp
// Module3Lab2
// Created by Ian Rohan on 9/13/2022
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {
	// Variables
	string myMonth;
	float billElectric;
	float billRent;
	float billWater;

	//Request Information
	cout << "Please enter month" << endl;
	cin >> myMonth;
	cout << "Please enter bill amount for electricity" << endl <<"$";
	cin >> billElectric;
	cout << "Please enter bill amount for rent" << endl <<"$";
	cin >> billRent;
	cout << "Please enter bill amount for water" << endl <<"$";
	cin >> billWater;

	cout << fixed << showpoint << setprecision(2);

	// Return Information
	cout << "\n\nBill Record Information" << "\n\n";
	cout << setfill('.') << left << setw(25) << "Month: " << right << "  " << myMonth << endl;
	cout << setfill('.') << left << setw(25) << "Electric Bill: " << right << "$ " << billElectric << endl;
	cout << setfill('.') << left << setw(25) << "Rent Bill: " << right << "$ " << billRent << endl;
	cout << setfill('.') << left << setw(25) << "Water Bill: " << right << "$ " << billWater << endl;
		float billTotal = (billElectric+billRent+billWater);
	cout << setfill('.') << left << setw(25) << "Total Due: " << right << "$ " << billTotal << endl;

	return 0;
}
