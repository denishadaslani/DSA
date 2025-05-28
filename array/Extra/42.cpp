

#include <iostream>
using namespace std;
main()
{
    int n, i;
    float avg;
    cout << "Enter The Size of Array:-";
    cin >> n;
    int a[n];
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter Value of [" << i << "]:";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array Element:-" << endl;
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
    avg = (float)sum / n;
    cout << "Sum of Array Element:" << sum << endl;
    cout << "Avrage Of array Element:" << avg;
}