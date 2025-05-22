// Negative Element In 1D array
#include <iostream>
using namespace std;
main()
{
    int size, i;

    cout << "Enter The Size Of an Array Element:-";
    cin >> size;
    int a[size];

    cout << "Input Of array Elemnet:- " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter The Value [" << i << "]: ";
        cin >> a[i];
    }

    cout << endl;
    cout << "Output Of Array Element:- " << endl;

    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "Negative Numbers are:-" << endl;

    for (i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << "" << a[i] << " ";
        }
    }
}
