#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Display frequencies
    cout << "\nFrequencies of elements:\n";
    for (auto it : freq) {
        cout << "Element " << it.first << " -> " << it.second << " times\n";
    }

    return 0;
}
