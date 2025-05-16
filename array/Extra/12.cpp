#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter The Size of Array:-";
    cin >> n;
    int a[n];
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value [" << i << "]:-";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array Element:- " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int min;
    int smin;
    if (a[0] < a[1])
    {
        min = a[0];
        smin = a[1];
    }
    else
    {
        min = a[1];
        smin = a[0];
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] < min)
        {
            smin = min;
            min = a[i];
        }
        else if (a[i] < smin && a[i] != min)
        {
            smin = a[i];
        }
    }
    cout << "Second smalltest Elemnet in Array:-" << endl;
    cout << smin << endl;
}
