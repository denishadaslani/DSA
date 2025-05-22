#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter The Size of an Array Element:-";
    cin >> n;

    int a[n];

    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter value of [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int index, value;
    cout << "Enter Index Where you want to Insert:-";
    cin >> index;
    cout << "Enter value :-";
    cin >> value;
    for (i = n - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = value;
    n++;

    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}