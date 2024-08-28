//
// main.cpp
// Module6Lab4
// Created by Ian Rohan on 11/3/2022
//

#include <iostream>



using namespace std;

	// Prototype Functions
		void printMenu ();
		int addNumbers (int, int, int);
		int addNumbers (int, int);
		double addNumbers (double, double, double);
		double addNumbers (double, double);

int main() {
	// Initialize Variables
	bool doAgain = true;
	int menuSelection;
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	double dolFirstNumber = 0;
	double dolSecondNumber = 0;
	double dolThirdNumber = 0;

	// Create Menu
	while (doAgain) {
		printMenu();
			cin >> menuSelection;
		switch (menuSelection) {
			case 1:
				cout << "Enter two integers to add together" << endl;
				cout << "First integer: " ;
				cin >> firstNumber;
				cout << "Second integer: " ;
				cin >> secondNumber;
				cout << "Your sum is " << addNumbers(firstNumber, secondNumber) << "\n\n";

				break;
			case 2:
				cout << "Enter three integers to add together" << endl;
				cout << "First integer: " ;
				cin >> firstNumber;
				cout << "Second integer: ";
				cin >> secondNumber;
				cout << "Third integer: " ;
				cin >> thirdNumber;
				cout << "Your sum is " << addNumbers(firstNumber, secondNumber, thirdNumber) << "\n\n";


				break;
			case 3:
				cout << "Enter two doubles to add together" << endl;
				cout << "First double: " ;
				cin >> dolFirstNumber;
				cout << "Second double: ";
				cin >> dolSecondNumber;
				cout << "Your sum is " << addNumbers(dolFirstNumber, dolSecondNumber) << "\n\n";

				break;
			case 4:
				cout << "Enter three doubles to add together" << endl;
				cout << "First double: " ;
				cin >> dolFirstNumber;
				cout << "Second double: ";
				cin >> dolSecondNumber;
				cout << "Third double: " ;
				cin >> dolThirdNumber;
				cout << "Your sum is " << addNumbers(dolFirstNumber, dolSecondNumber, dolThirdNumber) << "\n\n";

				break;
			case 5:
				cout << "Exiting the Program..." << "\n\n";
				doAgain = false;
				break;

			default: cout << "Error: selection entered is not valid" << "\n\n";
				break;
		}
	}
	return 0;
}

// Create Function for Menu
void printMenu () {
	cout << "Welcome to the Programming 1 Calculator - please enter your selection or enter 5 to exit" << endl;
	cout << "1) Add Two Integers" << endl;
	cout << "2) Add Three Integers" << endl;
	cout << "3) Add Two Doubles" << endl;
	cout << "4) Add Three Doubles" << endl;
	cout << "5) Exit the Program" << endl;
}

int addNumbers (int pOne, int pTwo, int pThree) {
	int numberSum;
	numberSum = (pOne + pTwo + pThree);
	return numberSum;
}

int addNumbers (int pOne, int pTwo) {
	int numberSum;
	numberSum = (pOne + pTwo);
	return numberSum;
}

double addNumbers (double pOne, double pTwo, double pThree) {
	double numberSum;
	numberSum = (pOne + pTwo + pThree);
	return numberSum;
}

double addNumbers (double pOne, double pTwo) {
	double numberSum;
	numberSum = (pOne + pTwo);
	return numberSum;
}
