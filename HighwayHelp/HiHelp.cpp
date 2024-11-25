#include <iostream>
using namespace std;

/*
 * A C++ program;
 * it asks for miles
 * and computes the time
 * it takes to get there
 * at 3 different speeds.
 * @author Matthew Washburn
 */

int main()
{
        double miles;
        cout << "What distance, in miles, are you driving? ";
        cin >> miles;
        double Amph = (miles)/60;
        double Bmph = (miles)/70;
        double Cmph = (miles)/80;
        cout << "At 60 mph it will take:" << Amph << " hours." << endl;
        cout << "At 70 mph it will take:" << Bmph << " hours." << endl;
        cout << "At 80 mph it will take:" << Cmph << " hours." << endl;
        return 0;
} //main
