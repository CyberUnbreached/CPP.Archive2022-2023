//
// main.cpp
// Module8Lab3
// Created by Ian Rohan on 11/27/2022
//

#include <iostream>
#include <iomanip>


using namespace std;
	// Declare Global Variables
		int ARRAY_SIZE = 5;

	// Prototype Functions
		void printElectionResults(string[], int[]);

int main() {
	// Declare Local Variables
	string candidateList[ARRAY_SIZE];
	int votesReceived[ARRAY_SIZE];

	// Prompt user to enter candidate information
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "Enter candidates last name: " << endl;
		getline(cin, candidateList[i]);
		cout << "How many votes did this candidate receive?" << endl;
		cin >> votesReceived[i];
		cin.ignore();
	}
	// Print statistics and who won the election
	printElectionResults(candidateList, votesReceived);

	return 0;
}

// Create function to show election results
void printElectionResults(string pCandidateList[], int pVotesReceived[]) {
	//Create local variables
		int totalVotes = pVotesReceived[0] + pVotesReceived[1] + pVotesReceived[2] + pVotesReceived[3] + pVotesReceived[4];

	// Organize candidate information
		cout << "Candidate" << "\t\t" << "Votes Received" << "\t\t" << "% of Total Votes" << "\n\n";
		for (int i = 0; i < ARRAY_SIZE; i++) {
			double percentVote = (pVotesReceived[i]/static_cast<double>(totalVotes))*100;
			cout << left << setw(30) << pCandidateList[i] << setw(23) << pVotesReceived[i];
			cout << fixed << setprecision(2) << percentVote << endl;
		}
		cout << left << setw(30) << "Total" << totalVotes << endl;

	// Show user what candidate had won
		cout << "The Winner of the Election is ";
		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (pVotesReceived[i] >= pVotesReceived[0]
			&& pVotesReceived[i] >= pVotesReceived[1]
			&& pVotesReceived[i] >= pVotesReceived[2]
	        && pVotesReceived[i] >= pVotesReceived[3]
			&& pVotesReceived[i] >= pVotesReceived[4]) {
				cout << pCandidateList[i] << ".";
			}

		}
}





