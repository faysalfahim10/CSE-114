#include <bits/stdc++.h>
using namespace std;

int main() {
    char str1[100];
    char str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    int j = 0;
    // Copy characters from the second string to the end of the first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Add the null terminator at the end of the concatenated string

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
