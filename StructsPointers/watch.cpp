#include <iostream>
#include <ctime>
#include "time205.hpp"
using namespace std;
/*
 * @author Matthew Washburn
 */
int main() {

        time_t now = time(0);
        struct tm currentTime;
        localtime_r(&now, &currentTime);


        Time watchTime;

        watchTime.hrs = currentTime.tm_hour;
        watchTime.min = currentTime.tm_min;
        watchTime.sec = currentTime.tm_sec;
        watchTime.ampm = (watchTime.hrs < 12);

        cout << endl;
        cout << "Current Time:" << endl;
        cout << endl;
        cout << "12-Hour Format:" << endl;
        printTime(&watchTime);
        cout << endl;
        cout << "24-Hour Format:" << endl;
        printMilTime(&watchTime);
        cout << endl;

return 0;
} // main