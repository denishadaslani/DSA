#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter The size of Array:- ";
    cin >> n;
    int a[n];
    cout << "input of Array:- " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:- ";
        cin >> a[i];
    }
    cout << "Output of Array:- " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << " Find the element that appears only once in an array where every other element appears twice.:-" << endl;

    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = '\0';
                a[i] = '\0';
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != '\0')
        {
            cout << a[i] << " ";
        }
    }
   
}