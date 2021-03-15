/*
// File Name:
// Written by:
// Description:  $1000 limit for shopping
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

using namespace std;

int main()
{
	double amount, total =0;
	
	do
	{
		cout << "Enter your price of the item: ";
		cin >> amount;
		
		if(amount + total <= 1000)
		{
			total+=amount;
		}
		else
		{
			cout <<"You have more than $1,000"<<endl;
		}
		
		cout << "Your current total is: "<<total<<" "<<endl;
		if(total == 1000)
		{
			amount = 0;
		}
		
		// must add 5 item
	}
	while(amount != 0);
	
	//end program
	cout << endl << endl <<endl;
	return 0;
}

