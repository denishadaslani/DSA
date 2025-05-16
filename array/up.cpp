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

    cout << "Enter Index Where you want to update :-";
    cin >> index;

    cout << "Enter value which you want to update :-";
    cin >> value;

    a[index] = value;

    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}