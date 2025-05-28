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
    cout << "find The smallest number Larger Than given number in the Array:-" << endl;
    int num;
    cout << "Enter the number:- ";
    cin >> num;

    int smallest = -1;
    for (i = 0; i < size; i++)
    {
        if (a[i] > num)
        {
            smallest = a[i];
            break;
        }
    }
    if (smallest == -1)
    {
        cout << "There is no number larger than " << num << " in the array." << endl;
    }
    else
    {
        cout << "The smallest number larger than " << num << " in the array is " << smallest << "." << endl;
    }
}
