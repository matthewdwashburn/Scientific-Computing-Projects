#include <iostream>
using namespace std;
/*
 * @author Matthew Washburn
 */
int
main()
{
        double min = 0.0;
        double max = 10.0;
        double delta, height, sum, x = 0.0;
        int steps;
        int i;
        for(steps = 10; steps < 10001; steps *= 10) {
                delta = (max-min) / steps;
                i = 0;
                x = min;
                while (i < steps) {
                        height = -0.005*x*(x-3)*(x-9)*(x-10)+2;
                        sum += height*delta;
                        x += delta;
                        i++;
        }
        cout << "Area under the curve is:" << sum << endl;
        sum=0;
        }
} // main
