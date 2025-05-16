#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter the size of Array Element:-";
    cin >> n;
    int a[n];
    cout << "Input Of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:";
        cin >> a[i];
    }
    cout << "Output of Array Elemnet:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "The odd numbers are:-" << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            cout << a[i] << " ";
        }
    }
}