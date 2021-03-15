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
	
	int frame=1;
	int total=0;
	int pins;
	
	
	while(frame<=10)
	{
	cout << "Please enter number of pins for Frame " << frame << ": ";
	cin >> pins;
	
	total +=pins;
	frame++;
	}
	cout << "The total # of pins for the string is " << total << endl;
	
	
	//end program
	cout << endl << endl <<endl;
	return 0;
}

