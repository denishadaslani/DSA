#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; // Max limit (static size but accepts dynamic input)

    cout << "Enter " << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> arr[i];
    }

    bool isDistinct = true;

    // Check for duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct)
        {
            break;
        }
    }

    if (isDistinct)
    {
        cout << "All elements are distinct." << endl;
    }
    else
    {
        cout << "There are duplicate elements." << endl;
    }

    return 0;
}
