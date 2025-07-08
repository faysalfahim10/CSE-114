#include <iostream>
#include <string>
using namespace std;

bool isStrongPassword(const string& password) {
    if (password.length() < 8)
        return false;

    bool hasLower = false, hasUpper = false, hasSpace = false;

    for (char ch : password) {
        if (islower(ch)) hasLower = true;
        else if (isupper(ch)) hasUpper = true;
        else if (isspace(ch)) hasSpace = true;
    }

    return hasLower && hasUpper && !hasSpace;
}

int main() {
    string password;

    cout << "Enter your password: ";
    getline(cin, password);  // Allows space input too

    if (isStrongPassword(password))
        cout << "The password is STRONG\n";
    else
        cout << "The password is WEAK\n";

    return 0;
}

