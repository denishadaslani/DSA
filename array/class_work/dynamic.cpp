#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter the size of Array:";
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout<<"output : ";    
        cout << a[i] << " ";
    }
}