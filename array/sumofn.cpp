#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter size of array:";
    cin >> n;
    int a[n];
    cout<<"Input Array Elements:-"<<endl;
    for (i = 0; i <= n; i++)
    {
        cout << "Enter value of a[" << i << "]:";
        cin >> a[i];
    }
    cout<<"output Array Elements:-"<<endl;
    for (i = 0; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum of array is: " << sum;
}
