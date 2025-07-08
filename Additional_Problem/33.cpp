#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0)
        return 1;                  // Base case: x^0 = 1
    else
        return x * power(x, n - 1); // Recursive case
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    //int result = power(base, exponent);
    cout << power(base, exponent) << endl;

    return 0;
}

