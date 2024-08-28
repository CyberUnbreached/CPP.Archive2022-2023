//
// main.cpp
// Module4Lab3
// Created by Ian Rohan on 9/29/2022
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;


int main() {
	// Create the file
	ofstream outFile;
	ifstream inFile;

	// Variable set up
	string eventName;
	double roomAmount;
	double roomCost;
	double roomDuration;
	double roomDiscount;
	const double salesTax = 0.08;

	// Input - Request Information
	cout << "What is the name of the event?" << endl;
	getline (cin, eventName);
	cout << "How many rooms are being booked?" << endl;
	cin >> roomAmount;
	if (roomAmount < 3) {
	(roomAmount = 3);
	}
	cout << "What is the cost per room?" << endl << "$";
	cin >> roomCost;
	if (roomCost < 100){
	(roomCost = 100);
	}
	cout << "How many days will the rooms be booked for?" << endl;
	cin >> roomDuration;

	// Processes
		//Calculate sub total cost of rooms without discount
	double subTotalCost = (roomCost * roomAmount * roomDuration);

		// Discount Set up (# of Rooms)
	if (roomAmount >= 10) {
	(roomDiscount = 0.30);
	}
	else if (roomAmount >=5) {
		(roomDiscount = 0.20);
	}
	else {
	(roomDiscount = 0.10);
	}

		// Create sub total variable with applied discount
	double appliedDiscountTotal = (subTotalCost - (subTotalCost * roomDiscount));
		// Create total tax variable from discounted total
	double salesTaxTotal = (appliedDiscountTotal * salesTax);
		// Create variable for total amount due
	double totalAmountDue = (appliedDiscountTotal + salesTaxTotal);

	// Put Information into file
	outFile.open("HotelEventInfo.txt");
	outFile << fixed << showpoint << setprecision(2);
	outFile << "\n" << "Event Name: " << eventName << endl;
	outFile << "Cost of renting one room without discount: $" << (subTotalCost / roomAmount) << endl;
	outFile << "Cost of all rooms without discount: $" <<  subTotalCost << endl;
	outFile << "Cost of renting one room with discount: $" << (appliedDiscountTotal / roomAmount) << endl;
	outFile << "Cost of renting all rooms with discount: $" << appliedDiscountTotal << endl;
	outFile << "Total Discount Applied: $" << (subTotalCost * roomDiscount) << endl;
	outFile << "Tax: $" << salesTaxTotal << endl;
	outFile << "Total Owed by Customer for all rooms: $" << totalAmountDue << endl;
	outFile.close();

	// Output information from file to console
	string HotelEventInfo;
	inFile.open ("HotelEventInfo.txt");
	while (getline (inFile, HotelEventInfo )) {
			cout << HotelEventInfo << endl;
		}

	return 0;
}
