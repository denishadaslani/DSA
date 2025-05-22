#include <iostream>
using namespace std;
main()
{
    int n, i;
    cout << "Enter The Size of an Array Element:-";
    cin >> n;

    int a[n];

    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter value of [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int index;
    cout << "Enter Index Where you want to Delete Element:-";
    cin >> index;

    for (int i = index; i <= n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
// static
#include <iostream>
using namespace std;
main()
{
    int i, n = 6, a[50] = {10, 20, 25, 30, 40, 50};
    int index = 2;
    for (i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}