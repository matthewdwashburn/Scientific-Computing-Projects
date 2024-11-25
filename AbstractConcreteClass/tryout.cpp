#include <iostream>
#include "RHexagon.hpp"
using namespace std;
/*
 * @author Matthew Washburn
 */
int main() {
        Hex myhex(5);
        cout << "This is a shape of " << myhex.getNumSides() << " sides." << endl;
        cout << "Area is: " << myhex.getArea() << endl;
        cout << "Perimeter is: " << myhex.getPerimeter() << endl;

return 0;
} // main
