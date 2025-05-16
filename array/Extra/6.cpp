#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter The size of Array:-";
    cin >> n;
    int a[n];
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output Of Array Elment:-";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "The Even Numbers Are:-" << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
}