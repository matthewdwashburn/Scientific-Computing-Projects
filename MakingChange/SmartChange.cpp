
#include <iostream>
using namespace std;
/*
 * A program that calculates
 * the number of coins based on
 * @author Matthew Washburn
 */
int
main()
{
        int cents;
        cout << "Enter the total number in cents: ";
        cin >> cents;
        cout << cents << " cents can be made using: ";

        double Quarters = cents/25;
        cents = cents%25;
        double Dimes = cents/10;
        cents = cents%10;
        double Nickles = cents/5;
        cents = cents%5;
        double Pennies = cents;
        cents = cents%1;
        int Total = Quarters + Dimes + Nickles + Pennies;

        if (Quarters == 1) {
                cout << Quarters << " Quarter, ";

        } else if (Quarters == 0) {
                cout << "";

        } else {
                cout << Quarters << " Quarters, ";
        }

        if (Dimes == 1) {
                cout << Dimes << " Dime, ";

        } else if (Dimes == 0) {
                cout << "";

        } else {
                cout << Dimes << " Dimes, ";
        }

        if (Nickles == 1) {
                cout << Nickles << " Nickle, ";

        } else if (Nickles == 0) {
                cout << "";

        } else {
                cout << Nickles << " Nickles, ";
        }


        if (Pennies == 1) {
                cout << "and " << Pennies << " Penny ";
                cout << "for " << Total << " coins total." << endl;

        } else if (Pennies == 0 && Total > 0) {
                cout << "";
                cout << "for " << Total << " coins total." << endl;
        } else if (Pennies == 0 && Total == 0) {
                cout << "";

        } else {
                cout << "and " << Pennies << " Pennies ";
                cout << "for " << Total << " coins total." << endl;
        }

        if (Total == 0) {
                cout << "0 coins total." << endl;
        }

        return 0;

} // main
