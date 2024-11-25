#include <iostream>
using namespace std;
/*
 *  A program that computes
 *  the triangle table for
 *  values 5 to 50
 *
 * @author Matthew Washburn
 */

void tritable(int a, int max) {
        if (a > max) {
        return;
        } else {
                cout << a << "   " << a*(a+1)/2 << endl;
                tritable(a+5, max);
        }
        }


int
main()
{
        int min = 5;
        int max = 50;
        cout << "n   " << "trianglular number" << endl;
        tritable(min, max);
        return 0;
}
 // main
