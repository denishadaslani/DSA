#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter size of Array:-";
    cin >> n;
    int a[n];
    cout<<"input Array Elements:-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout<<"output Array Elements:-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "Odd numbers are:-"<<endl;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            cout << a[i] << " ";
        }
    }
}