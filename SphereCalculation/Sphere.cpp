#include <iostream>
using namespace std;

/*
 * A C++ program;
 * it asks for radius
 * and computes the volume
 * for a sphere.
 *
 * @author Matthew Washburn
 */

int main()
{
        int radius;
        const double pi = 3.14159265358979323846;
        cout << "Enter a Radius: ";
        cin >> radius;
        double volume = (4*pi*radius*radius*radius)/3;
        cout << "Radius:" << radius << endl;
        cout << "Volume:" << volume << endl;

        return 0;
} //main
