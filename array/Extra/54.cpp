#include <iostream>
using namespace std;
main()
{
    int i, n;
    cout << "Enter the size of Array:-";
    cin >> n;
    int a[n];

    cout << "input of Array:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << "Output of Array:-" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
   
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int min = a[1] - a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i + 1] - a[i] < min)
        {
            min = a[i + 1] - a[i];
        }
    }

    cout << "The minimum difference between any two elements is:- " << min << endl;

}

