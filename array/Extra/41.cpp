#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter size of the array: ";
    cin >> size;

    int a[size];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }

    int product = 1; // Start with 1 because it's the identity for multiplication

    for (int i = 0; i < size; i++) {
        product = product * a[i];
    }

    cout << "The product of all elements is: " << product << endl;

    return 0;
}
