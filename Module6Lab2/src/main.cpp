//
// main.cpp
// Module6Lab2
// Created by Ian Rohan on 10/27/2022
//

#include <iostream>
#include <cctype>


using namespace std;

// Prototype Functions
void printHeader ();
void drawBox (int pLength, int pHeight, char pchar);
void printTypeShape (int plength, int pHeight);

int main() {
	// Initialize Variables
	int boxLength;
	int boxHeight;
	char boxCharacter;

	// Insert Program Header
	printHeader();
	cout << endl;

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
	cout << "\n" << "Box length: " << boxLength << endl;

	// Output - Box Height
	cout << "Box height: " << boxHeight << endl;

	// Output - Rectangle or Square
	printTypeShape(boxLength, boxHeight);
	// Output - Box
	drawBox(boxLength, boxHeight, boxCharacter);

	return 0;
}
// Create a void function as a program header:
	void printHeader() {
		cout << "**********************************************" << endl;
		cout << "                 Box Program                  " << endl;
		cout << "**********************************************" << endl;
	}

// Create a function that will build the box
	void drawBox (int pLength, int pHeight, char pChar ) {
		for (int row = 0; row < pHeight; row++) {
			for (int col = 0; col < pLength; col++) {
				cout << pChar;
			}
			cout << endl;
		}
	}
// Create a function that determines if the shape is a square or rectangle
	void printTypeShape (int pLength, int pHeight) {
		if (pHeight == pLength) {
				cout << "This is a square" << "\n\n";
			}
			else {
				cout << "This is a rectangle." << "\n\n";
			}
	}
