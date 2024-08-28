//
// main.cpp
// Module5Lab3
// Created by Ian Rohan on 10/18/2022
//

#include <iostream>
#include <iomanip>



using namespace std;


int main() {
	// Initialize Variables
	int boxLength;
	int boxHeight;
	char boxCharacter;

	// Input - Length of Box
	cout << "Define box length: " << endl ;
	cin >> boxLength;

	// Input - Height of Box
	cout << "Define box height: " << endl;
	cin >> boxHeight;

	// Input - Character used for visual box display
	cout << "Define character used for visual box display: " << endl;
	cin >> boxCharacter;

	// Output - Box Length
	cout << "Box length: " << boxLength << endl;

	// Output - Box Height
	cout << "Box height: " << boxHeight << endl;

	// Output - Message to the user that the box is either a rectangle or a square
	if (boxHeight == boxLength) {
		cout << "This is a square" << "\n\n";
	}
	else {
		cout << "This is a rectangle." << "\n\n";
	}
	// Output - Visual Representation of the Box using the user identified character (Use a for statement)
	for (int row = 0; row < boxHeight; row++) {
		for (int col = 0; col < boxLength; col++) {
			cout << boxCharacter;
		}
		cout << endl;
	}
	return 0;
}
