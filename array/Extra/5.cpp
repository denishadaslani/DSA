#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter the size of array:-";
    cin >> n;
    int a[n];
    cout << "Input of array element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "output of array :- " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "The Smallest Element in Array is:-" << min << endl;
}