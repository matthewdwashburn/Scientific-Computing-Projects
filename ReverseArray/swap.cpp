#include <iostream>
using namespace std;
/*
 * @author Matthew Washburn
 */
void print1(int a[], int size) {
        int i;
        for(i=0; i < size; i++) {
        cout << a[i] << " ";
        }
}

int
main()
{

        int ra[35];
        int i = 0;
        int read;

        while(cin >> read) {
        ra[i] = read;
        i++;
        }

        print1(ra, i);
        cout << endl;

        int start = 0;
        int end = i - 1;
        while (start < end) {
                int temp = ra[start];
                ra[start] = ra[end];
                ra[end] = temp;
                start++;
                end--;
        }

        print1(ra, i);
        cout << endl;
        return 0;
} // main

