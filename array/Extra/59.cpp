#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter the size of an array :- ";
    cin >> size;

    int a[size];
    cout << "Input array :- ";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    int k;
    cout << "\nEnter the k position :- ";
    cin >> k;

    cout << a[k - 1];
}