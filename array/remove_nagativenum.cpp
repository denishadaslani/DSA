#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter the size of Array:";
    cin >> n;
    int a[n];
    cout << "Input Array Elements:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:";
        cin >> a[i];
    }
    cout << "output Array Elements:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Removed Negative Numbers are:-" << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << " ";
        }
    }
}