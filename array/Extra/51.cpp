#include <iostream>
using namespace std;
main()
{
    int size, i;
    cout << "Enter Size:";
    cin >> size;
    int a[size - 1];
    cout << "Input of Array:-" << endl;
    for (i = 0; i < size - 1; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << endl;

    cout << "Output of Array:-" << endl;
    for (i = 0; i < size - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int total = size * (size + 1) / 2;
    int sum = 0;
    for (i = 0; i < size - 1; i++)
    {
        sum = sum + a[i];
    }
    int missing = total - sum;
    cout << "Missing number is:-" << missing << endl;
}