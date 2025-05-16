#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter The Size of Array Element:-";
    cin >> n;
    int a[n];
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value [" << i << "]:-";
        cin >> a[i];
    }
    cout << endl;
    cout << "output of Array element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int max = a[0];
    int smax;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            smax = max;
            max = a[i];
        }
    }
    cout << "Second Largest Element in Array Element:-" << endl;
    cout << smax << endl;
}