#include <iostream>
using namespace std;
main()
{
    int size, i;
    cout << "Enter Size:-";
    cin >> size;
    int a[size];
    cout << "Input of Array:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output of Array:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Rotate an Array To The Left By K positions:-" << endl;
    int k;
    cout << "Enter the value of K:-";
    cin >> k;
    for (i = 0; i < k; i++)
    {
        int temp = a[0];
        for (int j = 0; j < size - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[size - 1] = temp;
    }
    cout << "Output of Array:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}