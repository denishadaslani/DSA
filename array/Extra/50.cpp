#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    int maxLength = 1;
    int currentLength = 1;
    int endIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            currentLength = currentLength + 1;
        }
        else
        {
            currentLength = 1;
        }

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
            endIndex = i;
        }
    }

    cout << "Longest decreasing subarray: ";
    for (int i = endIndex - maxLength + 1; i <= endIndex; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nLength = " << maxLength << endl;

    return 0;
}
