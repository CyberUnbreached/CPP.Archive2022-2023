//
// main.cpp
// Module6Lab
// Created by Ian Rohan on 11/7/2022
//

#include <iostream>
#include <iomanip>


using namespace std;
	// Initialize Global Variables
	int totalSmallCups = 0;
	int totalMediumCups = 0;
	int totalLargeCups = 0;
	double totalMoneyMade = 0.00;
	double totalProfit = 0.00;
	double smallCupCost = 1.75;
	double mediumCupCost = 1.90;
	double largeCupCost = 2.00;

	// Prototype Functions
	void printHeader ();
	void printWelcome ();
	void printMenu ();
	void printConfirmOrder (int, int, int);
	void printUserReceipt (string, int, double, int, double, int, double);
	void printTotalCupSize ();
	void printTotalCoffeeSold ();
	void printTotalMoneyMade ();

 int main() {
	// Initialize Local Variables
	bool doAgain = true;
	bool loopWelcome = true;
	bool loopMenu = true;
	int welcomeSelection;
	int menuSelection;
	int confirmOrder;
	int orderAgain;
	string orderName;
	int smallCupAmount = 0;
	int mediumCupAmount = 0;
	int largeCupAmount = 0;



		cout << fixed << showpoint << setprecision(2);
	printHeader();
	cout << "Welcome to Sam's Coffee Shop!" << endl;
	// Create loop to request inputs from user
	while (doAgain) {
		smallCupAmount = 0;
		mediumCupAmount = 0;
		largeCupAmount = 0;
			// Introduce user to program
		while (loopWelcome) {
				printWelcome ();
				cin >> welcomeSelection;
				switch (welcomeSelection) {
					case 1:
						loopWelcome = false;
						break;
					case 2:
						cout << "Exiting the program..." ;
						return 1;
					default:
						cout << "Error: Not a valid selection" << "\n\n";
						break;
				}
		}

			// Show user menu with selections of coffee

		while (loopMenu) {
			printMenu ();
			cin >> menuSelection;
			switch (menuSelection) {
				case 1:
					cout << "How many small cups?" << endl;
					cin >> smallCupAmount;
					break;

				case 2:
					cout << "How many medium cups?" << endl;
					cin >> mediumCupAmount;
					break;

				case 3:
					cout << "How many large cups?" << endl;
					cin >> largeCupAmount;
					break;

				case 4:
					printConfirmOrder (smallCupAmount, mediumCupAmount, largeCupAmount);
					cin >> confirmOrder;
					switch (confirmOrder) {
					case 1:
						cout << "Name for the order?" << endl;
						cin >> orderName;
						loopMenu = false;
						break;

					default:
						loopMenu = true;
						smallCupAmount = 0;
						mediumCupAmount = 0;
						largeCupAmount = 0;
						break;

					}
					break;

				default:
					cout << "Error: Not a valid selection" << endl;
				}
			}
			// Print user receipt and ask if they would like to order again
			printUserReceipt (orderName, smallCupAmount, smallCupCost, mediumCupAmount, mediumCupCost, largeCupAmount, largeCupCost);
			cin >> orderAgain;
			cout << "\n\n";
			switch (orderAgain) {
				case 1:
					loopMenu = true;
					doAgain = true;
					break;
				default:
					doAgain = false;
					break;
			}
	}
	cout << "End of Day Summary" << "\n\n";
	printTotalCupSize ();
	printTotalCoffeeSold ();
	printTotalMoneyMade();


	return 0;
}
// Create header
	void printHeader() {
		cout << "**********************************************" << endl;
		cout << "*              Sam's Coffee Shop             *" << endl;
		cout << "**********************************************" << "\n\n";
	}

// Create function to show user how to use program
	void printWelcome () {

		cout << "Select 1 to begin your order or select 2 to exit program" << endl;
	}

// Create function for menu
	void printMenu () {
		cout << "Select what cup(s) of coffee you would like to order or enter 4 to end order" << endl;
		cout << "1) Small Cup(9 oz) - $1.75 each" << endl;
		cout << "2) Medium Cup(12 oz) - $1.90 each" << endl;
		cout << "3) Large Cup(15 oz) - $2.00 each" << endl;
		cout << "4) End Order" << endl;
	}

// Create function for order confirmation
	void printConfirmOrder (int pSmallAmount, int pMediumAmount, int pLargeAmount) {
		cout << "You are ordering " << pSmallAmount << " small cup(s)." << endl;
		cout << "You are ordering " << pMediumAmount << " medium cup(s)." << endl;
		cout << "You are ordering " << pLargeAmount << " large cup(s)." << "\n\n" ;
		cout << "Press 1 to confirm order or any input to change your order." << endl;
	}

// Create function to print user receipt
	void printUserReceipt (string pOrderName, int pSmallAmount, double pSmallCost, int pMediumAmount, double pMediumCost, int pLargeAmount, double pLargeCost) {
		double smallTotal = (pSmallAmount * pSmallCost);
		double mediumTotal = (pMediumAmount * pMediumCost);
		double largeTotal = (pLargeAmount * pLargeCost);

		cout << "Order Name: " << pOrderName << endl;
		if (pSmallAmount > 0){
			if (pSmallAmount == 1) {
				cout << "1 small cup of coffee -- $" << smallTotal << endl;
			}
			else {
				cout << pSmallAmount << " small cups of coffee -- $" << smallTotal << endl;
			}
		}
		if (pMediumAmount > 0){
					if (pMediumAmount == 1) {
						cout << "1 medium cup of coffee -- $" << mediumTotal << endl;
					}
					else {
						cout << pMediumAmount << " medium cups of coffee -- $" << mediumTotal << endl;
					}
				}
		if (pLargeAmount > 0){
							if (pLargeAmount == 1) {
								cout << "1 large cup of coffee -- $" << largeTotal << endl;
							}
							else {
								cout << pLargeAmount << " large cups of coffee - $" << largeTotal << endl;
							}
						}
		cout << "Your total is $" << (smallTotal + mediumTotal + largeTotal) << endl;
		cout << "Select 1 if you want to order again or any input to exit" << endl;

	// Add up current totals
		totalSmallCups = (pSmallAmount + totalSmallCups);
		totalMediumCups = (pMediumAmount + totalMediumCups);
		totalLargeCups = (pLargeAmount + totalLargeCups);
		totalMoneyMade = (smallTotal + mediumTotal + largeTotal);
	}

// Create a function to show the number of cups of each size sold
	void printTotalCupSize () {
		cout << "A total of " << totalSmallCups << " small cups were sold today." << endl;
		cout << "A total of " << totalMediumCups << " medium cups were sold today." << endl;
		cout << "A total of " << totalLargeCups << " large cups were sold today." << endl;
	}

// Create a function to show the total amount of coffee sold (in Ounces?)
	void printTotalCoffeeSold () {
		cout << "Overall, a total amount of " << (totalSmallCups + totalMediumCups + totalLargeCups) << " cups were sold today." << endl;
	}

// Create a function to show the total money made (assume the profit on all sales is 25%.)
	void printTotalMoneyMade () {
		cout << "The total profit made today is $" << (totalMoneyMade * .25) << endl;
	}

