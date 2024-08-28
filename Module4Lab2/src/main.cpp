//
// main.cpp
// Module4Lab2
// Created by Ian Rohan on 9/27/2022
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main() {
	// Set up variables
	double totalAcres;
	string firstVegetable;
	double firstVegArea;
	double firstVegCost;
	string secondVegetable;
	double secondVegCost;

	// Request information
	cout << "Enter total farm area in acres: " << endl;
	cin >> totalAcres;
	cout << "Enter name of first vegetable: " << endl;
	cin.ignore();
	getline (cin, firstVegetable); // <------ Figure out how to use getline here
	cout << "Enter number of acres of farm land used for first vegetable: " << endl;
	cin >> firstVegArea;
	cout << "Enter cost of the seed for the first Vegetable per acre: " << endl << "$";
	cin >> firstVegCost;
	cout << "Enter name of second vegetable: " << endl;
	cin.ignore();
	getline (cin, secondVegetable);
	cout << "Enter cost of the seed for the second Vegetable per acre: " << endl << "$";
	cin >> secondVegCost;

	// Process Information
	cout << fixed << showpoint << setprecision(2);
	double firstVegTotal = (firstVegArea * firstVegCost);
	double secondVegArea = (totalAcres - firstVegArea);
		double secondVegTotal = (secondVegArea * secondVegCost);
	double totalCost = (firstVegTotal + secondVegTotal);

	// Output Information
	cout << "First Vegetable: " << firstVegetable << endl;
	cout << setw(10) <<"Acres: " << firstVegArea << endl;
	cout << setw(10) << "Cost: " << firstVegTotal << endl;
	cout << "Second Vegetable: " << secondVegetable << endl;
	cout << setw(10) <<"Acres: " << secondVegArea << endl;
	cout << setw(10) << "Cost: " << secondVegTotal << endl;
	cout << "Total Cost of Crops: " << totalCost << endl;

	if (firstVegTotal > secondVegTotal) {
	cout << "You will spend the most money on " << firstVegetable << endl;
	}
	else {
	cout << "You will spend the most money on " << secondVegetable << endl;
	}

	return 0;
}
