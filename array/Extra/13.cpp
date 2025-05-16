#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter the size of Array Element:-";
    cin >> n;
    int a[n];
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Frequency Of Array Element:-" << endl;
    int count = 1;
    // single loop
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            cout << a[i] << " " << count << endl;
            count = 1;
        }
    }
}