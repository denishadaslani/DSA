#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100]; // Fixed size array for simplicity

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    bool onlyEven = true; // Assume all are even initially

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        { // If the element is odd
            onlyEven = false;
            break; // No need to check further
        }
    }

    if (onlyEven)
        cout << "The array contains only even numbers." << endl;
    else
        cout << "The array contains some odd numbers." << endl;

    return 0;
}
