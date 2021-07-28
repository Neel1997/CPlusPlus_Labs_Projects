/****************************************************************************
* Project number: 1
*
* Programmer: Neel Patel
*
* Submission Date: September 13, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Tic Tac Toe Game
*
*
***************************************************************************/
#include <iostream>
#include <time.h>

using namespace std;

void display();
int testEnd(int);
char grid[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '}; // Declaring global variables
int i, n;


int main() {
	string player1;
	char letter;
	int random, valid = 0, repeat = 0;
	while (i == 0) {
		display();
		cout << "Please enter a row and column (e.g. 2B): ";
		while (valid == 0) { //Valid used to see if spot was taken
			cin >> player1;
				if (player1 == "1A") {
					if (grid[0] == ' ') {
					grid[0] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else if (player1 == "1B") {
				if (grid[1] == ' ') {
					grid[1] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else if (player1 == "1C") {
				if (grid[2] == ' ') {
					grid[2] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else if (player1 == "2A") {
				if (grid[3] == ' ') {
					grid[3] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else if (player1 == "2B") {
				if (grid[4] == ' ') {
					grid[4] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else if (player1 == "2C") {
				if (grid[5] == ' ') {
					grid[5] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else if (player1 == "3A") {
				if (grid[6] == ' ') {
					grid[6] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else if (player1 == "3B") {
				if (grid[7] == ' ') {
					grid[7] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else if (player1 == "3C") {
				if (grid[8] == ' ') {
					grid[8] = 'X';
					valid = 1;
				}
				else {
				cout << "Can't do that. Try again: ";
				}
			}
			else {
				cout << "Can't do that. Try again: ";
			}
		}
		srand(time(NULL)); //Begins to do the random placement for computer
		random = rand() % 8;
		while ((grid[random] == 'X' || grid[random] == 'O') && grid[random] != ' ') {
			random = rand() % 8;
			repeat++;
			if (repeat > 8) { //Set max number of repeats so program wouldn't endlessly loop at end
				break;
			}
		}
		repeat = 0;
		grid[random] = 'O';
		valid = 0;
		system("cls"); //Clears the screen so only grid is showing
		display();
		for (n = 0; n < 9; n++) { //Checks for winning combination
			if (grid[0] == 'X' && grid[0] == grid[1] && grid[1] == grid[2]) {
				i = 2;
			}
			else if (grid[0] == 'O' && grid[0] == grid[1] && grid[1] == grid[2]) {
				i = 1;
			}
			else if (grid[0] == 'X' && grid[0] == grid[3] && grid[3] == grid[6]) {
				i = 2;
			}
			else if (grid[0] == 'O' && grid[0] == grid[3] && grid[3] == grid[6]) {
				i = 1;
			}
			else if (grid[0] == 'X' && grid[0] == grid[4] && grid[4] == grid[8]) {
				i = 2;
			}
			else if (grid[0] == 'O' && grid[0] == grid[4] && grid[4] == grid[8]) {
				i = 1;
			}
			else if (grid[3] == 'X' && grid[3] == grid[4] && grid[4] == grid[5]) {
				i = 2;
			}
			else if (grid[3] == 'O' && grid[3] == grid[4] && grid[4] == grid[5]) {
				i = 1;
			}
			else if (grid[6] == 'X' && grid[6] == grid[7] && grid[7] == grid[8]) {
				i = 2;
			}
			else if (grid[6] == 'O' && grid[6] == grid[7] && grid[7] == grid[8]) {
				i = 1;
			}
			else if (grid[1] == 'X' && grid[1] == grid[4] && grid[4] == grid[7]) {
				i = 2;
			}
			else if (grid[1] == 'O' && grid[1] == grid[4] && grid[4] == grid[7]) {
				i = 1;
			}
			else if (grid[2] == 'X' && grid[2] == grid[5] && grid[5] == grid[8]) {
				i = 2;
			}
			else if (grid[2] == 'O' && grid[2] == grid[5] && grid[5] == grid[8]) {
				i = 1;
			}
			else if (grid[2] == 'X' && grid[2] == grid[4] && grid[4] == grid[6]) {
				i = 2;
			}
			else if (grid[2] == 'O' && grid[2] == grid[4] && grid[4] == grid[6]) {
				i = 1;
			}
			else if (grid[0] != ' ' && grid[1] != ' ' && grid[2] != ' ' && grid[3] != ' ' && grid[4] != ' ' && grid[5] != ' ' && grid[6] != ' ' && grid[7] != ' ' && grid[8] != ' ') {
				i = 3;
			}
		}
		testEnd(i); //Calls to function to test whether game is over
	}
}

void display() { //Function to display 3x3 grid
	int row;
	system("cls");
	cout << "Please choose a row and a column (X)" << endl;
	cout << "   A   B   C   " << endl;
	cout << "     |   |     " << endl;
	cout << "1  " << grid[0] << " | " << grid[1] << " |  " << grid[2] << "   " << endl;
	cout << "     |   |     " << endl;
	cout << "  ------------" << endl;
	cout << "     |   |     " << endl;
	cout << "2  " << grid[3] << " | " << grid[4] << " |  " << grid[5] << "   " << endl;
	cout << "     |   |     " << endl;
	cout << "  ------------" << endl;
	cout << "     |   |     " << endl;
	cout << "3  " << grid[6] << " | " << grid[7] << " |  " << grid[8] << "   " << endl;
	cout << "     |   |     " << endl;
}

int testEnd(int i) {
	if (i == 1) { //Begins to test to see which result to output
			cout << "The winner is the computer.  Oh well, try again another day." << endl;
			return 0;
		}
		else if (i == 2) {
			cout << "You win!  Nice job!" << endl;
			return 0;
		}
		else if (i == 3) {
			cout << "No winner.  All spaces are taken." << endl;
			return 0;
		}
}