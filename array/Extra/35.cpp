#include <iostream>
using namespace std;
main()
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

    int sum = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum = sum + a[i];
        }
    }
    cout << endl;
    cout << "Output of odd Array Element Indices:-" << endl;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Sum of odd Array Element Indices:-" << sum << endl;
}