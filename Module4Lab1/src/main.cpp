//
// main.cpp
// Module4Lab1
// Created by Ian Rohan on 9/27/2022
//

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
	// Set up variables
	double myNumber;
	string ifPositive = "Your number is Positive";
	string ifNegative = "Your number is Negative";
	string ifZero = "Your number is Zero";

	// Request number from user
	cout << "Enter Number:" << endl;
	cin >> myNumber;

	// Determine if # is positive, negative, or zero and output
	if (myNumber > 0)
	{
	cout << ifPositive << endl;
	}
	else if (myNumber < 0)
	{
	cout << ifNegative << endl;
	}
	else
	{
	cout << ifZero << endl;
	}

	return 0;
}
