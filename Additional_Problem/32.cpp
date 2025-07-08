#include <iostream>
using namespace std;

// Swap function using reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a,b;
    cin >> a >> b;

    swap(a,b); // Passing by reference

    cout << a << " " << b << endl;


    return 0;
}
