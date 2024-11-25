#include <iostream>
#include <stdlib.h>
using namespace std;
/*
 * @author Matthew Washburn
 */
double C(double start);
double F(double start);
main()
{
char scale;
double start;
double end;
double step;

        cout << "Starting Temp:";
        cin >> start;
        cout << "Ending Temp:";
        cin >> end;
        cout << "Step Value:";
        cin >> step;
        cout << "Input Scale (c or f):";
        cin >> scale;

double loop;
        if (start > end) {
        loop = (start - end);
        }
        if (start < end) {
        loop = (end - start);
        }
int i;

        switch (scale) {
                case 'f':
        cout << "F   " << "C" << endl;
        cout << start << "   " << F(start) << endl;
        for(i=0; i<loop; i+=abs(step)) {
        start += step;
        cout << start << "   " << F(start) << endl;
        }
        break;
                case 'c':
        cout << "C   " << "F" << endl;
        cout << start << "   " << C(start) << endl;
        for(i=0; i<loop; i+=abs(step)) {
        start += step;
        cout << start << "   " << C(start) << endl;
        }
        break;
                default:
        cout << "Please enter a valid input scale!" << endl;
        }
        return 0;
} // main
double
F(double start) {
double f;
f = (start - 32) * (5.0/9);
return f;
} // Fahrenheit to Celcius

double
C(double start) {
double c;
c = (9.0/5) * (start + 32);
return c;
} // Celcius to Fahrenheit




