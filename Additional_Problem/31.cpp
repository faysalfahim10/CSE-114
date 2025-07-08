#include <iostream>
using namespace std;

#define SWAP(x, y) { int temp = x; x = y; y = temp; }

int main() {
    int a, b;
    cout << "Enter two numbers:\n";
    cin >> a >> b;

    SWAP(a, b);

    cout << a << " " << b << endl;

    return 0;
}

