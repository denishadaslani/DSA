#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter the size of array :- ";
    cin >> size;

    int arr[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Output Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int maxLen = 0;

    for (int i = 0; i < size; i++)
    {
        int a = arr[i];
        int b = -1;
        int len = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == a || (b == -1 && arr[j] != a))
            {
                if (arr[j] != a)
                    b = arr[j];
                len++;
            }
            else if (arr[j] == b)
            {
                len++;
            }
            else
            {
                break;
            }
        }

        if (len > maxLen)
            maxLen = len;
    }
    cout << endl;
    cout << "Length of longest subarray with at most two distinct numbers: " << maxLen << endl;

    return 0;
}