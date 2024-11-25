#ifndef RHEXAGON
#define RHEXAGON
#include "Poly.hpp"
/*
 * @author Matthew Washburn
 */
class Hex : public Polygon {

    private:
        double length;
    protected:
        int nsides;
    public:
        Hex(double length);
        double getArea();
        double getPerimeter();
        double getNumSides();
};
#endif
