#include <iostream>
using namespace std;
/*
 * A program that calculates
 * the number of coins based on
 * how much cents you have.
 * @author Matthew Washburn
 *
 */
int
main()
{
	int cents;
	cout << "Enter the total number in cents: " << endl;
	cin >> cents;
	cout << cents << " cents is made up of: ";

	double Quarters = cents/25;
	cents = cents%25;
	double Dimes = cents/10;
	cents = cents%10;
	double Nickles = cents/5;
	cents = cents%5;
	double Pennies = cents;
	cents = cents%1;
	int total = Quarters + Dimes + Nickles + Pennies;

	cout << Quarters << " Quarters, " << Dimes << " Dimes, "
	<< Nickles << " Nickles, " << "and " << Pennies << " Pennies "
	<< "for a total of " << total << " coins." << endl;

	return 0;

} // main

		
