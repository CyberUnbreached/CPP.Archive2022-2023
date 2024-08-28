//
// main.cpp
// Module8Lab1
// Created by Ian Rohan on 11/15/2022
//

#include <iostream>
#include <iomanip>


using namespace std;
// Declare Global Variables
	int ARRAY_SIZE = 5;

// Prototype functions
	double AverageGrades(double[]);
	void DisplayGrades (double[], double, string);

int main() {
	// Declare variables
	string studentName;
	double studentGrades[ARRAY_SIZE];
	cout << fixed << showpoint << setprecision(2);

	// Prompt user for name and grades
	cout << "Enter student name: " ;
	getline(cin, studentName);

	for (int i = 0; i < 5; i++) {
		cout << "Enter grade #" << (i + 1) << ": ";
		cin >> studentGrades[i];
	}
	DisplayGrades (studentGrades, AverageGrades(studentGrades), studentName);

	return 0;
}

double AverageGrades(double pArrayGrades[]) {
	double mySum = 0.0;
	double myAverage = 0.0;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		mySum = mySum + pArrayGrades[i];
	}
	myAverage = (mySum / ARRAY_SIZE);
	return myAverage;
}

void DisplayGrades (double pArrayGrades[], double pAverageGrades, string pName) {
	cout << "\n\n";
	cout << "Name: " << pName << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "#" << i + 1 << " " << "Grade: " << pArrayGrades[i] << endl;
	}
	cout << "Your grade average is " << pAverageGrades << endl;
}
