/*
Name: Mehul Patel
Class: CSC-151 -- Programming 1
Date:10/25/16
Filename:

Description:
*/

#include <iostream>

using namespace std;

int main()
{
	int score;
	
	cout << "Please enter you string score: ";
	cin >> score;	
	
	
	while(score < 0 || score > 300)
	{
	cout << "Error: Score is out of the valid range!!\n\n ";
	cout << "Please enter you string score: ";
	cin >> score;
	}
	
	cout << score << " is a valid score!!!\n";
	
	
	//end program
	cout << endl << endl <<endl;
	return 0;
}

