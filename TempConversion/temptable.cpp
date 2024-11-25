#include <iostream>
#include <string>
using namespace std;

/**
 * @author Matthew Washburn
 */

double CtoF(double celcius);

int main() {
    double sum = 0;
    double celcius;
    double dev;
    double avg;
    double temp[1000];
    int i;
    int j;

    cout << "Enter temperatures in Celsius (type a non-numeric value to stop):" << endl;
    cout << "Temp (F)   Deviation" << endl;

    // Input loop
    for (i = 0; i < 1000; i++) {
        cin >> celcius;
        if (cin.fail()) {
            break; // Stop input if non-numeric value is entered
        }
        temp[i] = CtoF(celcius); // Convert to Fahrenheit
        sum += temp[i]; // Add to sum
    }

    if (i == 0) {
        cout << "No temperatures entered. Exiting program." << endl;
        return 0;
    }

    // Calculate average
    avg = sum / i;

    // Output temperatures and deviations
    for (j = 0; j < i; j++) {
        dev = temp[j] - avg;
        cout << temp[j] << "   " << dev << endl;
    }

    cout << "Average temperature (F): " << avg << endl;

    return 0;
}

double CtoF(double celcius) {
    return (celcius * 9.0 / 5) + 32;
}
