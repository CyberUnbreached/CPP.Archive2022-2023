//
// main.cpp
// Module5Lab1
// Created by Ian Rohan on 10/13/2022
//

#include <iostream>
#include <iomanip>


using namespace std;


int main() {
	// Set up Variables
	int lowerInteger;
	int upperInteger;
	int numberMultiple5 = 0;
	int numberMultiple3 = 0;

	// Prompt user for information
	cout << "Enter lower range integer:" << endl;
	cin >> lowerInteger;
	cout << "Enter upper range integer:" << endl;
	cin >> upperInteger;

	// Create program counter variable
	int programCounter = lowerInteger;

	// Process information with loop
	while (programCounter <= upperInteger) {
		if (programCounter % 5 == 0){
			numberMultiple5++;
		}
		if (programCounter % 3 == 0) {
			numberMultiple3++;
		}
		programCounter++;
	}

	// Output information to user
	cout << "The lower range: " << lowerInteger << endl;
	cout << "The upper range: " << upperInteger << endl;
	cout << "The count of numbers in the range that are multiples of 3: " << numberMultiple3 << endl;
	cout << "The count of numbers in the range that are multiples of 5: " << numberMultiple5 << endl;

	return 0;
}
