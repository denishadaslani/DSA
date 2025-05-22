#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter the size of array:-";
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Find The index First Occurence of Element only first occurence:- ";
    int firstoccurence;
    cin >> firstoccurence;
    for (i = 0; i < n; i++)
    {
        if (a[i] == firstoccurence)
        {
            cout << i << endl;
            break;
        }
    }
}