//
// main.cpp
// Module2Lab3
// Created by Ian Rohan on 9/6/2022
//

#include <iostream>
using namespace std;

int main() {
	//Variables for Test Grades
	int testGradeOne = 93;
	int testGradeTwo = 89;
	int testGradeThree = 95;
	float testAverage;

	//Average Equation of Tests
	testAverage = static_cast<float>(testGradeOne + testGradeTwo + testGradeThree) /3;

	cout << "Average Grade: " << testAverage << endl;

	return 0;
}
