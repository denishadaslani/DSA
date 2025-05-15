#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter size of array:";
    cin >> n;
    int a[n];
    cout<<"Input Array Elements:-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter value of a[" << i << "]";
        cin >> a[i];
    }
    cout<<"output Array Elements:-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    cout<<"Even numbers are: ";
    for (i = 0; i < n; i++)
    {

        if (a[i] % 2 == 0)
        {
            
            cout << a[i] << " ";
        }
    }
}