//
// main.cpp
// Module5Lab2
// Created by Ian Rohan on 10/18/2022
//

#include <iostream>
#include <iomanip>



using namespace std;


int main() {
	// Set up Variables
	int firstNum;
	int secondNum;
	int evenSum = 0;
	int oddSum = 0;
	bool doAgain = true;

	// Prompt the user to input two integers: firstNum and secondNum - (firstNum must be less than secondNum).
	while (doAgain) {
		cout << "Enter first number" << endl;
			cin >> firstNum;
			cout << "Enter second number (must be larger than first number)" << endl;
			cin >> secondNum;

		if (firstNum >= secondNum) {
			cout <<"Error: Enter numbers again" << "\n\n";
		}
		else {
			doAgain = false;
		}
	}
	// Output all odd numbers between firstNum and secondNum.
	cout << "\n" << "The odd number(s) between your first and second number are: " << endl;
	for(int i = firstNum; i <= secondNum; i++) {
		if (i % 2 != 0) {
			cout << i << endl ;
			oddSum = oddSum + i;
		}
	}
	// Output all even numbers between firstNum and secondNum.
	cout << "\n" << "The even number(s) between your first and second number are: " << endl;
	for(int i = firstNum; i <= secondNum; i++) {
		if (i % 2 == 0) {
			cout << i << endl ;
			evenSum = evenSum + i;
		}
	}

	// Output the sum of all even numbers between firstNum and secondNum.
	cout << "\n" << "The sum of all the even numbers is " << evenSum << endl;

	// Output the sum of all odd numbers between firstNum and secondNum.
	cout << "The sum of all odd numbers is " << oddSum << endl;

	return 0;
}
