#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter size of array:-";
    cin >> n;
    int a[n];
    cout << "Input Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array Element:-"<<endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}