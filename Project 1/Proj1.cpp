/****************************************************************************
* Project number: 1
*
* Programmer: Neel Patel
*
* Submission Date: September 14, 2017
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
void checkWin();
int testEnd(int);
char grid[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int i, n;

int main() {
	int row = 0, col = 0, valid = 0, random1, random2, repeat;
	char alphaCol;
	while (i == 0) {
		display();
	while (valid == 0) {
	cout << "Enter a numeric row: ";
	cin >> row;
	while (row != 1 && row != 2 && row != 3) {
		cout << "Can't do that. Try again homie: ";
		cin >> row;
	}
	cout << "Now please enter a column: ";
	cin >> alphaCol;
	while (alphaCol != 'A' && alphaCol != 'a' && alphaCol != 'B' && alphaCol != 'b' && alphaCol != 'C' && alphaCol != 'c') {
		cout << "Can't do that.  Try again homie: ";
		cin >> alphaCol;
	}
	if (alphaCol == 'A' || alphaCol == 'a') {
		col = 0;
	}
	else if (alphaCol == 'B' || alphaCol == 'b') {
		col = 1;
	}
	else if (alphaCol == 'C' || alphaCol == 'c') {
		col = 2;
	}
	if (row == 1 && col == 0) {
		if (grid[0][0] == ' ') {
			grid[0][0] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;
		}
	}
	else if (row == 1 && col == 1) {
		if (grid[0][1] == ' ') {
			grid[0][1] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;;
		}
	}
	else if (row == 1 && col == 2) {
		if (grid[0][2] == ' ') {
			grid[0][2] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;
		}
	}
	else if (row == 2 && col == 0) {
		if (grid[1][0] == ' ') {
			grid[1][0] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;
		}
	}
	else if (row == 2 && col == 1) {
		if (grid[1][1] == ' ') {
			grid[1][1] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;;
		}
	}
	else if (row == 2 && col == 2) {
		if (grid[1][2] == ' ') {
			grid[1][2] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;;
		}
	}
	else if (row == 3 && col == 0) {
		if (grid[2][0] == ' ') {
			grid[2][0] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;
		}
	}
	else if (row == 3 && col == 1) {
		if (grid[2][1] == ' ') {
			grid[2][1] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;
		}
	}
	else if (row == 3 && col == 2) {
		if (grid[2][2] == ' ') {
			grid[2][2] = 'X';
			valid = 1;
		}
		else {
			cout << "Can't do that. Try again. " << endl;
		}
	}
	}
	checkWin();
	srand(time(NULL)); //Begins to do the random placement for computer
		random1 = rand() % 3;
		random2 = rand() % 3;
		while ((grid[random1][random2] == 'X' || grid[random1][random2] == 'O') && grid[random1][random2] != ' ') {
			random1 = rand() % 3;
			random2 = rand() % 3;
			repeat++;
			if (repeat > 7) { //Set max number of repeats so program wouldn't endlessly loop at end
				break;
			}
		}
		repeat = 0;
		grid[random1][random2] = 'O';
		valid = 0;
		system("cls");
		display();
		checkWin();
		testEnd(i); //Calls to function to test whether game is over
	}
	return 0;
}

void display() { //Function to display 3x3 grid
	system("cls");
	cout << "Please choose a row and a column (X)" << endl;
	cout << "   A   B   C   " << endl;
	cout << "     |   |     " << endl;
	cout << "1  " << grid[0][0] << " | " << grid[0][1] << " |  " << grid[0][2] << "   " << endl;
	cout << "     |   |     " << endl;
	cout << "  ------------" << endl;
	cout << "     |   |     " << endl;
	cout << "2  " << grid[1][0] << " | " << grid[1][1] << " |  " << grid[1][2] << "   " << endl;
	cout << "     |   |     " << endl;
	cout << "  ------------" << endl;
	cout << "     |   |     " << endl;
	cout << "3  " << grid[2][0] << " | " << grid[2][1] << " |  " << grid[2][2] << "   " << endl;
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

void checkWin() {
	if (grid[0][0] == 'X' && grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2]) {
			i = 2;
		}
		else if (grid[0][0] == 'O' && grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2]) {
			i = 1;
		}
		else if (grid[0][0] == 'X' && grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0]) {
			i = 2;
		}
		else if (grid[0][0] == 'O' && grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0]) {
			i = 1;
		}
		else if (grid[0][0] == 'X' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
			i = 2;
		}
		else if (grid[0][0] == 'O' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
			i = 1;
		}
		else if (grid[1][0] == 'X' && grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2]) {
			i = 2;
		}
		else if (grid[1][0] == 'O' && grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2]) {
			i = 1;
		}
		else if (grid[2][0] == 'X' && grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2]) {
			i = 2;
		}
		else if (grid[2][0] == 'O' && grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2]) {
			i = 1;
		}
		else if (grid[0][1] == 'X' && grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1]) {
			i = 2;
		}
		else if (grid[0][1] == 'O' && grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1]) {
			i = 1;
		}
		else if (grid[0][2] == 'X' && grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2]) {
			i = 2;
		}
		else if (grid[0][2] == 'O' && grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2]) {
			i = 1;
		}
		else if (grid[0][2] == 'X' && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
			i = 2;
		}
		else if (grid[0][2] == 'O' && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
			i = 1;
		}
		else if (grid[0][0] != ' ' && grid[0][1] != ' ' && grid[0][2] != ' ' && grid[1][0] != ' ' && grid[1][1] != ' ' && grid[1][2] != ' ' && grid[2][0] != ' ' && grid[2][1] != ' ' && grid[2][2] != ' ') {
				i = 3;
			}
}