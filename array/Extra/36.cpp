#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter The size of Array:-";
    cin >> n;
    int a[n];
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output of Array Element:-" << endl;
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
    cout << "minimum element in array is:" << min << endl;
    cout << endl;
    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "maximum element in array is:" << max << endl;
}