#include <iostream>
using namespace std;
main()
{
    int size, i;
    cout << "Enter the Size of Array:-";
    cin >> size;
    int a[size];
    cout << "Input Of Array Element :-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Positive Number in Array Element:-" << endl;
    for (i = 0; i < size; i++)
    {
        if (a[i] > 0)
        {
            cout << a[i] << " ";
        }
    }
}