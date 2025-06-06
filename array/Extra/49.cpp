#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter " << n << " elements: " << endl; 
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    int maxLength = 1;     // Longest length found
    int currentLength = 1; // Current increasing length
    int endIndex = 0;      // End index of longest subarray

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLength = currentLength + 1;
        } else {
            currentLength = 1;  // Reset if not increasing
        }

        if (currentLength > maxLength) {
            maxLength = currentLength;
            endIndex = i;
        }
    }

    // Print result
    cout << "Longest increasing subarray: ";
    for (int i = endIndex - maxLength + 1; i <= endIndex; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nLength = " << maxLength << endl;

    return 0;
}
