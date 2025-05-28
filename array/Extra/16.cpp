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
    cout << endl;
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
    cout << endl;
    for (i = n - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }

    a[index] = value;

    n++;
    cout << "New Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}