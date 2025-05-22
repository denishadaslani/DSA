#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter The Size Of Array Element:-";
    cin >> n;
    cout << endl;
    int a[n];
    cout << "Input of  Array Element:- " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output Of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Reverse Number of Array Element:-" << endl;
    for (i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}