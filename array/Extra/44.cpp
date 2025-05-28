#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100]; // fixed size for simplicity

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    bool onlyOdd = true; // assume all are odd initially

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        { // if element is even
            onlyOdd = false;
            break;
        }
    }

    if (onlyOdd)
        cout << "The array contains only odd numbers." << endl;
    else
        cout << "The array contains some even numbers." << endl;

    return 0;
}
