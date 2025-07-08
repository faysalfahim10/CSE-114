#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    // Sum of diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Only primary diagonal elements
    }

    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}
