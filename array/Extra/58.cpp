#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size :- ";
    cin >> size;

    int a[size];
    cout << "Input Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                a[i] = '\0';
                a[j] = '\0';
            }
        }
    }
    cout << " \nfirst non-repeating element  :- ";
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i];
            break;
        }
    }
}