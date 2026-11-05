
#include <iostream>
#include <vector>
using namespace std;

void displayArray(const vector<int>& arr) {
    cout << "Array elements: ";
    for (int value : arr) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr;
    int n, value, position;

    // Create an array of any size
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        arr.push_back(value);
    }

    displayArray(arr);

    // Insert a value
    cout << "\nEnter value to insert: ";
    cin >> value;

    cout << "Enter position (0 to " << arr.size() << "): ";
    cin >> position;

    if (position >= 0 && position <= arr.size()) {
        arr.insert(arr.begin() + position, value);
        cout << "After insertion:\n";
        displayArray(arr);
    } else {
        cout << "Invalid position!\n";
    }

    // Delete a value
    cout << "\nEnter value to delete: ";
    cin >> value;

    bool found = false;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == value) {
            arr.erase(arr.begin() + i);
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Value deleted successfully.\n";
    } else {
        cout << "Value not found!\n";
    }

    displayArray(arr);

    return 0;
}
