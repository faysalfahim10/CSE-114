#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase string: " << str << endl;

    return 0;
}

    /*
    *for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Lowercase string: " << str << endl;*/
