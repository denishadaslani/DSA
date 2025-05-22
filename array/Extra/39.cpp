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

    cout << "Sum of All positive Element:-" << endl;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sum = sum + a[i];
        }
    }
    cout << sum << endl;
}