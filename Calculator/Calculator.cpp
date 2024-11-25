#include <iostream>
using namespace std;
/*
 * A program that asks for
 * 2 numbers and an operator
 * and computes the equation
 * @author Matthew Washburn
 */

int
main()
{
        double First;
        double Second;
        char Operator;
        cout << "Enter the first number: ";
        cin >> First;
        cout << "Enter the second number: ";
        cin >> Second;
        cout << "Enter the Operator (+, -, *, /, %): ";
        cin >> Operator;

        switch (Operator) {
                case '*':
        cout << First << " * " << Second << " = " << First * Second << endl;
        break;
                case '/':
        cout << First << " / " << Second << " = " << First / Second << endl;
        break;
                case '+':
        cout << First << " + " << Second << " = " << First + Second << endl;
        break;
                case '-':
        cout << First << " - " << Second << " = " << First - Second << endl;
        break;
                case '%':
        cout << First << " % " << Second << " = " << (int)First % (int)Second << endl;
        break;
                default:
        cout << "Please Enter a Valid Operator!" << endl;
}
return 0;
} // main
