#include "RHexagon.hpp"
/*
 * @author Matthew Washburn
 */
Hex::Hex(double length) : length(length) {
        numSides = 6;
}
double Hex::getNumSides() { return numSides; }
double Hex::getArea() { return 2.5981 * length * length; }
double Hex::getPerimeter() { return 6 * length; }
