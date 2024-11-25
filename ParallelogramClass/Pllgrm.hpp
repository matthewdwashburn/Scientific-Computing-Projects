#ifndef PLLGRM_HPP
#define PLLGRM_HPP
#include <iostream>
#include "Rect.hpp"
#include <cmath>
/*
 * @author Matthew Washburn
 */
class Pllgrm : public Rect {
	private:
	double angle;

	public:
	Pllgrm(double l=0, double w=0, double a=M_PI/2);
	double getAngle();
	void setAngle(double a);
	double getArea() {
		return length * width * sin(angle);
	}
};
#endif // PLLGRM_HPP
	
	
