#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter The size of Array:-";
    cin >> n;
    int a[n];
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "check if Element is Exits in Array:-" << endl;
    int check;
    cout << "Enter Element:-";
    cin >> check;

    int found = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == check)
        {
            cout << "Element is Exits in Array" << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Element is not Exits in Array" << endl;
    }
}