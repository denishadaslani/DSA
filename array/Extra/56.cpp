#include <iostream>
using namespace std;
main()
{
    int size, i;
    cout << "Enter size:";
    cin >> size;
    int a[size];
    cout << "Input of Array Elment:-" << endl;
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
    int k;
    cout << "Enter The Target sum:-";
    cin >> k;
    int maxlen = 0;
    for (i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = sum + a[j];
            if (sum == k)
            {
                int len = j - i + 1;
                if (len > maxlen)
                {
                    maxlen = len;
                }
            }
        }
    }
    cout << "The longest subarray with sum " << k << " is of length " << maxlen;
}