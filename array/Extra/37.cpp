#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter The size of Array:-";
    cin >> n;
    int a[n];

    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }

    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Corrected Sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in Ascending Order:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
