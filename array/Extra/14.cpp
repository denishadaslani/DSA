#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter The size of Array:- ";
    cin >> n;
    int a[n];
    cout << "input of Array:- " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:- ";
        cin >> a[i];
    }
    cout << "Output of Array:- " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Remove Duplicate Element in Array:-" << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}