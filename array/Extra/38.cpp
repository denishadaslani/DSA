#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter the size of Array:- ";
    cin >> n;

    int a[n];  // Variable-length array (allowed in some compilers)
    cout << "Input of Array Elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }

    cout << "Original Array Elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // 🔄 Bubble Sort for Descending Order
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] < a[j + 1]) 
            {
                // swap
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array in Descending Order:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
