#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter the size of Array:-";
    cin >> n;
    int a[n];
    cout << "Input OF The Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value of [" << i << "]:";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array ElemnetL:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << endl;
    cout << "Sum of All Element Are:-" << sum << endl;
}