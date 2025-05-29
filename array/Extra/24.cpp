#include <iostream>
using namespace std;

int main() {
    int size, i;
    cout << "Enter Size:-";
    cin >> size;
    int a[size];
    cout << "Input of Array:-" << endl;
    for (i = 0; i < size; i++) {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output of Array:-" << endl;
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Rotate an Array To The Right By K positions:-" << endl;
    int k;
    cout << "Enter the value of K:-";
    cin >> k;

    // Adjust k if greater than size
    k = k % size;

    // Rotate right by shifting right k times
    for (i = 0; i < k; i++) {
        int temp = a[size - 1];  // Save last element
        for (int j = size - 1; j > 0; j--) {
            a[j] = a[j - 1];     // Shift right
        }
        a[0] = temp;             // Put last element at front
    }

    cout << "Output of Array:-" << endl;
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
