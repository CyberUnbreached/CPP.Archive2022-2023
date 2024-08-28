//
// main.cpp
// Module6Lab3
// Created by Ian Rohan on 10/27/2022
//

#include <iostream>



using namespace std;

// Prototype Functions
int sumofOdd (int firstNumber, int secondNumber);
int sumofEven (int firstNumber, int secondNumber);
int numberofEven (int firstNumber, int secondNumber);
int numberofOdd (int firstNumber, int secondNumber);

int main() {
	// Initialize Variables
	int lowerNumber;
	int higherNumber;
	bool doAgain = true;
	bool lowerLoop = true;
	bool higherLoop = true;

	// Request and receive information
	while (doAgain) {
		cout << "Please enter 2 numbers between 100 and 200" << endl;
		while (lowerLoop) {
			cout << "Enter the first number (lowest) in the range: " ;
			cin >> lowerNumber;
			if (100 <= lowerNumber && lowerNumber <= 200) {
			break;
			}
			else {
				cout << "Error: Enter first number again" << "\n\n";
			}
		}
		while (higherLoop) {
			cout << "Enter the second number (highest) in the range: ";
			cin >> higherNumber;
			if (100 <= higherNumber && higherNumber <=200) {
			break;
			}
			else {
				cout << "Error: Enter second number again" << "\n\n" << endl;
			}
		}
		if (lowerNumber < higherNumber) {
			doAgain = false;
			cout << endl;
		}
		else {
			cout << "Error: Second number is not larger than first number" << "\n\n" << endl;
		}
	}
	cout << "Sum of all even numbers in the range " << lowerNumber << " to " << higherNumber << " is " << sumofEven(lowerNumber, higherNumber) << endl;
	cout << "Count of all even numbers in the range " << lowerNumber << " to " << higherNumber << " is " << numberofEven(lowerNumber, higherNumber) << endl;
	cout << "Sum of all odd numbers in the range " << lowerNumber << " to " << higherNumber << " is " << sumofOdd(lowerNumber, higherNumber) << endl;
	cout << "Count of all odd numbers in the range " << lowerNumber << " to " << higherNumber << " is " << numberofOdd(lowerNumber, higherNumber) << endl;
	return 0;

	}

// Create Functions
	// Sum of Odd Numbers
	int sumofOdd (int pLow, int pHigh) {
		int oddSum = 0;
		for(int i = pLow; i <= pHigh; i++) {
				if (i % 2 != 0) {
					oddSum = oddSum + i;
				}
		}
		return oddSum;
	}

	// Sum of Even Numbers
	int sumofEven (int pLow, int pHigh) {
		int evenSum = 0;
		for(int i = pLow; i <= pHigh; i++) {
				if (i % 2 == 0) {
					evenSum = evenSum + i;
				}
			}
		return evenSum;
	}

	// Count of all Odd Numbers
	int numberofOdd (int pLow, int pHigh) {
		int countOdd = 0;
		for(int i = pLow; i <= pHigh; i++) {
						if (i % 2 != 0) {
							countOdd = countOdd + 1;
						}
					}
		return countOdd;
	}

	int numberofEven (int pLow, int pHigh) {
			int countEven = 0;
			for(int i = pLow; i <= pHigh; i++) {
							if (i % 2 == 0) {
								countEven = countEven + 1;
							}
						}
			return countEven;
		}
