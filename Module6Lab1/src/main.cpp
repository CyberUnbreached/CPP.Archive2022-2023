//
// main.cpp
// Module6Lab1
// Created by Ian Rohan on 10/25/2022
//

#include <iostream>
#include <iomanip>


using namespace std;

// Prototype functions
double accountBal (double, double);
void printHeader ();

int main() {
	// Variable Set-up
	double initialSavings;
	double depositAmount;

	// Prompt the user for an initial savings account balance
	cout << "Enter initial savings account balance: " << endl << "$";
	cin >> initialSavings;
	// Prompt the user for a deposit amount
	cout << "Enter deposit amount: " << endl << "$";
	cin >> depositAmount;

	cout << "\n\n" << endl;
	cout << fixed << showpoint << setprecision(2);

	// Program Header
	printHeader();
	cout << endl;
	// Beginning Balance
	cout << "Initial Balance: $" << initialSavings << endl;
	// Deposit amount
	cout << "Deposit Amount: $" << depositAmount << endl;
	// New Balance
	cout << "New Balance: $" << accountBal(initialSavings, depositAmount) << endl;

	return 0;
}

// Create a function that will take 2 arguments
// and return the calculated balance of the account
	double accountBal (double pNumOne, double pNumTwo) {
	return (pNumOne + pNumTwo);
	}
// Create a void function as a program header:
	void printHeader() {
		cout << "**********************************************" << endl;
		cout << "                 Alamo Bank                   " << endl;
		cout << "**********************************************" << endl;
	}
