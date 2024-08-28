//
// main.cpp
// Module8Lab2
// Created by Ian Rohan on 11/22/2022
//

#include <iostream>
#include <iomanip>


using namespace std;
	// Declare Global Variables
		int ARRAY_SIZE = 5;

	// Prototype Functions
		void printCarInfo(string[], double[]);


int main() {
	// Declare Local Variables
	string carName[ARRAY_SIZE];
	double carMPG[ARRAY_SIZE];
	cout << fixed << showpoint << setprecision(1);
	// Prompt user for car names and MPG's
	for (int i = 0; i < ARRAY_SIZE; i++) {
			cout << "Enter car name: " << endl;
			getline(cin, carName[i]);
			cout << "Enter car MPG: " << endl;
			cin >> carMPG[i];
			cin.ignore();
	}

	// Print information
		printCarInfo (carName, carMPG);

	return 0;
}

// Create function to print information on car
void printCarInfo (string pCarName[], double pCarMPG[]) {
		for (int i = 0; i < ARRAY_SIZE; i++) {
			cout << "Car: " << pCarName[i] << endl;
			cout << "\t" << "MPG: " << pCarMPG[i] << endl;
			if (pCarMPG[i] > 30.0) {
				cout << "\t" << "Economical" << "\n\n";
			}
			else {
				cout << "\t" << "Gas Guzzler" << "\n\n";
			}
		}
	}
