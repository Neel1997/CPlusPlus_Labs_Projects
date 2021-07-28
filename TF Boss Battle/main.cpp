/****************************************************************************
* Project number: 2
*
* Programmer: Tyler Fries
*
* Submission Date: September 27, 2017
*
* EGRE 246 Fall 2017
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Boss Battle
*
*
***************************************************************************/
#include "player.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int i = 1, j = 1, k = 1, l = 1;
	int temp = 1;
	int damage = 0;
	char input = '0';
	srand(42);
	Player p1, p2;
	p1.setName("Tom");
	p2.setName("Jerry");
	while(i == 1)
	{
		j = 1;
		l = 1;
		cout << "Player 1 - HP:" << p1.dispHealth() << "                 Player 2 - HP:" << p2.dispHealth() << endl;
		cout << " " << p1.dispName() << "                               " << p2.dispName() << endl;
		cout << " 1. Attack Low  - " << p1.dispLow() << " Left          1. Attack Low  - " << p2.dispLow() << " Left" << endl;
		cout << " 2. Attack Mid  - " << p1.dispMed() << " Left          2. Attack Mid  - " << p2.dispMed() << " Left" << endl;
		cout << " 3. Attack High - " << p1.dispHi() << " Left          3. Attack High  - " << p2.dispHi() << " Left" << endl << endl;
		while(j == 1)
		{
			cout << "Which attack do you choose? (1,2,3): ";
			cin >> input;
			if(input == '1')
			{
				p2.Damage(p1.lowAtk());
				j = 42;
			}
			if(input == '2')
			{
				p2.Damage(p1.medAtk());
				j = 42;
			}
			if(input == '3')
			{
				p2.Damage(p1.hiAtk());
				j = 42;
			}
			else if (input != '3' && input != '2' && input != '1')
			{
				cout << "Please input either 1, 2, or 3" << endl;
			}
		}
		k = rand() % 2 + 1;
		if(k == 1)
		{
			p1.Damage(p2.lowAtk());
			
		}
		if(k == 2)
		{
			p1.Damage(p2.medAtk());
		}
		if(k == 3)
		{
			p1.Damage(p2.hiAtk());
		}
		if(p2.dispHealth() <= 0 || p1.dispHealth() <= 0)
		{
			
			while(l == 1)
			{
				if(p1.dispHealth() > p2.dispHealth())
				{
					cout << "Good Job Man, you have won. ";
				}
				if(p2.dispHealth() > p1.dispHealth())
				{
					cout << "Boo you stink, you have lost. ";
				}
				cout << "Would you like to try again? (Y/N)" << endl;
				cin >> input;
				if(input == 'Y' || input == 'y')
				{
					l = 42;
					p1.reset();
					p2.reset();
				}
				if(input == 'N' || input == 'n')
				{
					l = 42;
					i = 42;
				}
				else
				{
					cout << "Please choose either Y or N" << endl;
				}
			}
		}
	}
}
