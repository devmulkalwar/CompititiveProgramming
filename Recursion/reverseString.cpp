#include <bits/stdc++.h>
using namespace std;

string reverseString(string str) {
    if (str.length() == 0) {
        return "";
    }
    return str.back() + reverseString(str.substr(0, str.length() - 1));
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversedStr = reverseString(str);
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}