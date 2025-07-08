#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    // Linear Search
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element " << target << " found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element " << target << " not found in the array.\n";
    }

    return 0;
}
