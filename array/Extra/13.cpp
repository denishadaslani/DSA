#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter the size of Array Element:-";
    cin >> n;
    int a[n];
    cout << "Input of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Frequency Of Array Element:-" << endl;
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = '\0';
                count++;
            }
        }
        if (a[i] != 0)
        {
            cout << a[i] << " " << count << " times" << endl;
        }
    }
}