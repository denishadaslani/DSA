#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int a[n];

    cout << "Input the Array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Finding majority element using brute force
    int total = n / 2;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > total) {
            cout << "Majority element is: " << a[i] << endl;
            found = true;
            break; // Only one majority element can exist
        }
    }

    if (!found) {
        cout << "No majority element found." << endl;
    }

    return 0;
}
