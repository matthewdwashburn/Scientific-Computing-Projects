#include <iostream>
using namespace std;
/*
 *  A program that computes
 *  the triangle table for
 *  values 5 to 50
 * @author Matthew Washburn
 */

int
main()
{
        int a;
        cout << "n   " << "trianglular number" << endl;
        for(a=5;a<=50;a+=5) {
        cout << a << "   " << a*(a+1)/2 << endl;
        }
return 0;
} // main
