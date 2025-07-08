#include<bits/stdc++.h>
using namespace std;
int main() {
    int num1, num2, gcd, lcm;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    for (int i = 1; i <= num1 && i <= num2 ; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }
    lcm = (num1*num2)/gcd;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}

