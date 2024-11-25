#include "Poly.hpp"
/*
 * @author Matthew Washburn
 */
class Hex : public Polygon {
    protected:
        int nsides;
        double len;
    public:
        Hex(double length) {
            nsides = 6;
            len = length;
        }
    double getArea() { return 2.5981 * len * len; }
    double getPerimeter() { return 6 * len; }
};