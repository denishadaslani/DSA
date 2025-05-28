#include <iostream>
using namespace std;

int main()
{
    int arr[100], temp[100], n, k;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "]";
        cin >> arr[i];
    }

    cout << "Enter K (right rotation): ";
    cin >> k;

    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        temp[j] = arr[i];

        for (int i = 0; i < n - k; i++)
        {
            temp[j] = arr[i];
            j++;
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }

        cout << "Array after right rotation:\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }
}