#include <bits/stdc++.h>
using namespace std;

struct Item {
    int code;
    string name;
    int quantity;
    float price;
};

// Function to add item
void addItem(vector<Item>& inventory) {
    Item newItem;
    cout << "Enter item code: ";
    cin >> newItem.code;
    cout << "Enter item name: ";
    cin.ignore(); // to handle newline
    getline(cin, newItem.name);
    cout << "Enter quantity: ";
    cin >> newItem.quantity;
    cout << "Enter price: ";
    cin >> newItem.price;

    inventory.push_back(newItem);
}

// Function to display all items
void displayItems(const vector<Item>& inventory) {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << "\nCurrent Inventory:\n";
    for (const auto& item : inventory) {
        cout << "Code: " << item.code
             << ", Name: " << item.name
             << ", Quantity: " << item.quantity
             << ", Price: $" << item.price << "\n";
    }
}

// Function to search item by code
void searchItem(const vector<Item>& inventory, int searchCode) {
    bool found = false;
    for (const auto& item : inventory) {
        if (item.code == searchCode) {
            cout << "Item found:\n";
            cout << "Code: " << item.code
                 << ", Name: " << item.name
                 << ", Quantity: " << item.quantity
                 << ", Price: $" << item.price << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found.\n";
    }
}

int main() {
    vector<Item> inventory;
    int choice;

    do {
        cout << "\nGift Shop Inventory Menu:\n";
        cout << "1. Add Item\n";
        cout << "2. Display All Items\n";
        cout << "3. Search Item by Code\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            addItem(inventory);
        } else if (choice == 2) {
            displayItems(inventory);
        } else if (choice == 3) {
            int code;
            cout << "Enter item code to search: ";
            cin >> code;
            searchItem(inventory, code);
        }

    } while (choice != 4);

    return 0;
}
