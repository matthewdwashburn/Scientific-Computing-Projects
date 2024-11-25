#include <iostream>
using namespace std;
/*
 * @author Matthew Washburn
 */
int
main()
{
        char uarray[80];
        int encrypt;
        cout << "Enter a message to encrypt: " << endl;
        cin >> uarray;
        cout << "Enter the key: " << endl;
        cin >> encrypt;

        int i = 0;
        while (uarray[i] != '\0') {
        char uchar = (uarray[i] + encrypt);
                if (uchar > 'z') {
                uchar = 'a' + (uchar - 'z' - 1);
        }
        cout << uchar;
        i++;
        }
        cout << endl;
} // main
