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
    cout << "index of last occurence of element:-";
    int lastoccurence;
    cin >> lastoccurence;

    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] == lastoccurence)
        {
            cout << i << " " << endl;
            break;
        }
    }
}