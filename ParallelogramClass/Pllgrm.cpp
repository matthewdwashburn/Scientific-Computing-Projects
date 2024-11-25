#include <iostream>
#include <cmath>
#include "Pllgrm.hpp"
/*
 * @author Matthew Washburn
 */
Pllgrm::Pllgrm(double l, double w, double a) : Rect(l, w), angle(a) {}


double Pllgrm::getAngle() {
        return angle;
}

void Pllgrm::setAngle(double a) {
        angle = a;
}

