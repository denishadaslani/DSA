#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Enter Size of Array:- ";
    cin >> size;

    int a[size];
    cout << "Input of Array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:- ";
        cin >> a[i];
    }

    cout << "Output of Array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int num;
    cout << "Enter the number:- ";
    cin >> num;

    int largest = -1;

    for (i = 0; i < size; i++)
    {
        if (a[i] > largest && a[i] < num)
        {
            largest = a[i];
        }
    }
    if (largest == -1)
        cout << "No number is smaller than " << num << endl;
    else
        cout << "The largest number smaller than " << num << " is " << largest << endl;
}
