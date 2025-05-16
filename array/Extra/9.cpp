#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter the size of Array:-";
    cin >> n;
    int a[n];
    cout << endl;
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "The Negative Number In Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
}