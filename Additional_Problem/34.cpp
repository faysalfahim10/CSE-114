#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    char grade;
};

int main() {
    Student students[5];

    // Input student information
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student #" << (i + 1) << ":\n";

        cout << "ID: ";
        cin >> students[i].id;

        cout << "Name: ";
        cin.ignore(); // clear input buffer before getline
        getline(cin, students[i].name);

        cout << "Age: ";
        cin >> students[i].age;

        cout << "Grade: ";
        cin >> students[i].grade;

        cout << endl;
    }

    // Display student information
    cout << "Student details:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student #" << (i + 1) << ":\n";
        cout << "ID: " << students[i].id << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Age: " << students[i].age << "\n";
        cout << "Grade: " << students[i].grade << "\n\n";
    }

    return 0;
}

