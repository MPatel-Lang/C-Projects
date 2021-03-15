/*
// File Name:
// Written by:
// Description:
// Challenges:
// Time Spent:
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1)
// 2)
// 3)
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//randomize
	srand(time(0));
	
	//Declare variables and constants
	int numSides, numDice; //input
	int diceSum; //output
	int high, low;
	//Prompt the user for the # of sides
	cout<< "Please enter the number the sides on the dice: ";
	cin >>numSides;
	
	//Prompt the user for the # of dice
	cout<< "Please enter the number of dice to be rolled: ";
	cin >>numDice;
	
	//generate the sum of the dice
	high = numDice * numSides;
	low = numDice;
	diceSum = rand() % (high - low + 1) + low;
	
	//display the sum of the dice
	cout << "The sum of the dice is... " << diceSum <<endl;
	
	//end program
	cout << endl << endl <<endl;
	return 0;
}

