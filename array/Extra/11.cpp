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

    int max;
    int smax;
    if (a[0] > a[1])
    {
        max = a[0];
        smax = a[1];
    }
    else
    {
        max = a[1];
        smax = a[0];
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > max)
        {
            smax = max;
            max = a[i];
        }
        else if (a[i] > smax && a[i] < max)
        {
            smax = a[i];
        }
    }

    cout << "Second Largest Elemnet in Array:-" << endl;
    cout << smax << endl;
}
