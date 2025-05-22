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
    int index, value;

    cout << "Enter Index Where you want to update :-";
    cin >> index;

    cout << "Enter value which you want to update :-";
    cin >> value;

    a[index] = value;

    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// #include <iostream>
// using namespace std;
// main()
// {
//     int i, n = 5, a[50] = {10, 20, 25, 40, 50};
//     int index = 2;
//     int value = 30;
//     a[index] = value;
//     for (i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }