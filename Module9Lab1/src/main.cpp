//
// main.cpp
// Module9Lab1
// Created by Ian Rohan on 11/29/2022
//

#include <iostream>
#include <iomanip>


using namespace std;
	// Create structure to hold student variables
	struct studentInformation
	{
		string firstName;
		string lastName;
		double studentGPA;
		string studentMajor;
	};

	// Prototype functions
	void printStudentInfo(studentInformation);

int main() {
	// Create instance of structure
	studentInformation studentInfo;

	// Set double out format
	cout << fixed << showpoint << setprecision(2);

	// Request input information from user
	cout << "Enter student's first name: ";
	getline(cin, studentInfo.firstName);
	cout << endl;
	cout << "Enter student's last name: ";
	getline(cin, studentInfo.lastName);
	cout << endl;
	cout << "Enter student's GPA: ";
	cin >> studentInfo.studentGPA;
	cin.ignore();
	cout << endl;
	cout << "Enter student's major: ";
	getline(cin, studentInfo.studentMajor);
	cout << endl;

	// Output arranged information
	printStudentInfo(studentInfo);

	return 0;
}
	// Create function to print student information from structure and user inputs
	void printStudentInfo(studentInformation pInfo) {
		cout << "Student Name: " << pInfo.firstName << " " << pInfo.lastName << endl;
		cout << "Student GPA: " << pInfo.studentGPA << endl;
		cout << "Student Major: " << pInfo.studentMajor << endl;
	}
