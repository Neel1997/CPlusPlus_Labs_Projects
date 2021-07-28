/****************************************************************************
* Project number: 2
*
* Programmer: Neel Patel
*
* Submission Date: September 27, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: BOSS BATTLE
*
*
***************************************************************************/
#include <iostream>
#include <cstdlib>
#include "player.h"

using namespace std;

int main() {
	Player player1, computer;
	int userInput, skip, attack, i, k = 0;
	string answer;
	player1.setName("Rick");
	computer.setName("Morty");
	srand(42);
	while (k == 0) {
	while (player1.getHealth() > 0 && computer.getHealth() > 0) {
	cout << endl << "Player1 - HP: " << computer.getHealth() << "				    " << "Player 2 - HP: " << player1.getHealth() << endl;
	cout << " " << player1.getName() << "                                		     " << computer.getName() << endl << endl;
	cout << " 1. Attack Low - " << player1.showLow() << " Left                             1. Attack Low - " << computer.showLow() << " Left" << endl;
	cout << " 2. Attack Mid - " << player1.showMid() << " Left                             2. Attack Mid - " << computer.showMid() << " Left" << endl;
	cout << " 3. Attack High - " << player1.showHigh() << " Left                            3. Attack High - " << computer.showHigh() << " Left" << endl << endl;
	cout << "Which attack do you choose? <1,2,3> - ";
	cin >> userInput;
	while (userInput != 1 && userInput != 2 && userInput != 3) {
		cout << "Can't do that. Try again: ";
		cin >> userInput;
	}
	if (userInput == 1) {
		if (player1.showLow() == 0) {
		}
		else {
			player1.getLow();
		}
	}
	else if (userInput == 2) {
		if (player1.showMid() == 0) {
		}
		else {
			player1.getMid();
		}
	}
	else if (userInput == 3) {
		if (player1.showHigh() == 0) {
		}
		else {
			player1.getHigh();
		}
	}
	//Computer's turn
	i = rand() % 2 + 1; //Used for different attack ranges
	if (i == 1) {
		computer.getLow();
	}
	else if (i == 2) {
		computer.getMid();
	}
	else if (i == 3) {
		computer.getHigh();
	}
	if (computer.getHealth() <= 0) {
		cout << endl << "You have lost. Try again" << endl << endl;
		break;
	}
	else if (player1.getHealth() <= 0) {
		cout << endl << "You have won. Good job!" << endl << endl;
		break;
	}
	}
	cout << "Would you like to play again? (Yes or No): ";
	cin >> answer;
	if (answer == "yes" || answer == "Y" || answer == "y") {
		computer.reset();
		player1.reset();
		k = 0;
	}
	else {
		k = 1;
		return 0;
	}
	}
}