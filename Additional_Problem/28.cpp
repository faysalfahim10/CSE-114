#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Matrix addition is only valid when dimensions match
    if (r1 != r2 || c1 != c2) {
        cout << "Matrix addition not possible. Sizes do not match.\n";
    }

    // Matrix multiplication is only valid when c1 == r2
    if (c1 != r2) {
        cout << "Matrix multiplication not possible. Columns of A must equal rows of B.\n";
        return 0;
    }

    // Declare matrices
    int A[r1][c1], B[r2][c2], sum[r1][c1], product[r1][c2];

    // Input matrix A
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    // Input matrix B
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Matrix addition (only if dimensions match)
    if (r1 == r2 && c1 == c2) {
        cout << "Sum of matrices:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                sum[i][j] = A[i][j] + B[i][j];
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Matrix multiplication
    cout << "Product of matrices:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

