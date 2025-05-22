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
    cout << "Sorted array in Asending Order:-" << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}