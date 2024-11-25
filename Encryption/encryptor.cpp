#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
/*
 * @author Matthew Washburn
 */
int main() {
    string message;
    string key;
    cout << "Enter a message to encrypt (No Spaces): " << endl;
    cin >> message;
    cout << "Enter the key: " << endl;
    cin >> key;

    string result = message;

    bool isEncrypting = true;

    if (key[0] == '-') {
        isEncrypting = false;
        key = key.substr(1);
    }

    char* messagePtr = &message[0];
    char* keyPtr = &key[0];
    char* resultPtr = &result[0];

    for (; *messagePtr != '\0'; ++messagePtr, ++resultPtr) {
        char keywordChar = keyPtr[(resultPtr - &result[0]) % key.length()];
        int offset = (isEncrypting ? 1 : -1) * (keywordChar - 'a' + 1);
        char base = islower(*messagePtr) ? 'a' : 'A';

        if (isalpha(*messagePtr)) {
            *resultPtr = ((*messagePtr - base + offset + 26) % 26) + base;
        }
    }
    cout << result << endl;
    return 0;
}

