#include <iostream>
using namespace std;

int main()
{
    int size, d, count = 0;

    cout << "Enter size of the array: ";
    cin >> size;

    int a[size];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }

    cout << "Enter the number to check divisibility: ";
    cin >> d;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % d == 0)
        {
            count++;
        }
    }

    cout << "Number of elements divisible by " << d << " is: " << count << endl;

    return 0;
}
