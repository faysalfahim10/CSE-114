#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    //int length = 0;
    // Calculate string length manually
    //while (str[length] != '\0') {
        //length++;

    int start = 0;
    int end = str.size() - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
