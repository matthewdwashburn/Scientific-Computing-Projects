#include <iostream>
#include "time205.hpp"
using namespace std;
/*
 * @author Matthew Washburn
 */
void printTime(struct Time *ptr) {
        cout << (ptr -> hrs) - 12 << ":";
        cout << ptr -> min << ":";
        cout << ptr -> sec;
        if(ptr -> ampm) {
                cout << " a.m." << endl;
        }
        else {
                cout << " p.m." << endl;
}
}

void printMilTime(struct Time *ptr) {
        cout << ptr -> hrs << ":";
        cout << ptr -> min << ":";
        cout << ptr -> sec << endl;
}

