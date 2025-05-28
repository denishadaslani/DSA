#include <iostream>
using namespace std;
main()
{
    int i, size;
    cout << "Enter Size of Array:-";
    cin >> size;
    int a[size];

    int middle = size / 2;

    cout << "Input of Array:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output of Array:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Middle Element:-" << endl;

    if (size % 2 == 0)
    {
        cout << a[middle - 1] << " " << a[middle] << " ";
    }
    else
    {
        cout << a[middle];
    }

    cout << endl;
}