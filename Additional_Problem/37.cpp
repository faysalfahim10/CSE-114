#include <iostream>
using namespace std;

// Recursive function to find GCD of a and b
int gcd(int a, int b) {
    if (b == 0) {           // Base case: if second number is zero,
        return a;           // then first number is the GCD
    }
    return gcd(b, a % b);   // Recursive call with smaller numbers
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

