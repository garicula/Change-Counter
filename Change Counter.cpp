// Garrick Morley
// CPSC 200 Project 3 B
// This program counts change from a purchase

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <fstream>
#include <cassert>
using namespace std;

//the int x = 0; things are just filler, it breaks without them

main()
{
	//declare all variables and initialize
	double price = 0;
	double cash = 0;
	double change = 0;
	int coins = 0;
	int dollars = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;
	
	//input the price
	cout << "Enter the purchase amount: " << endl;
	cin >> price;
	
	//input the amount paid
	cout << "Enter the amount tendered: " << endl;
	cin >> cash;
	
	//calculate and print the change
	change = cash - price;
	cout << "Your change is: " << change << endl;
	
	//calculate and print dollars
	dollars = floor(change);
	if (dollars > 1)
		cout << dollars << " dollars, ";
	else if (dollars == 1)
		cout << dollars << " dollar, ";
	else if (dollars == 0)
		int x = 1;
	coins = ((change - dollars) + 0.005) * 100;
	
	//calculate and print quarters
	quarters = coins / 25;
	if (quarters > 1)
		cout << quarters << " quarters, ";
	else if (quarters == 1)
		cout << quarters << " quarter, ";
	else if (quarters == 0)
		int x = 0;
	coins = coins % 25;
	
	//calculate and print dimes
	dimes = coins / 10;
	if (dimes > 1)
		cout << dimes << " dimes, ";
	else if (dimes == 1)
		cout << dimes << " dime, ";
	else if (dimes == 0)
		int x = 0;
	coins = coins % 10;
	
	//calculate and print nickels
	nickels = coins / 5;
	if (nickels > 1)
		cout << nickels << " nickels ";
	else if (nickels == 1)
		cout << nickels << " nickel ";
	else if (nickels == 0)
		int x = 0;
	coins = coins % 5;
	
	//calculate and print pennies
	pennies = coins;
	if (pennies > 1)
		cout << ", and " << coins << " pennies.";
	else if (pennies == 1)
		cout << ", and " << pennies << " penny.";
	else if (pennies == 0)
		int x = 0;
}
