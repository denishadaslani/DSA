#include <iostream>
using namespace std;
int main()
{
    int size, i;
    cout << "Enter size:-";
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
    cout << "Sort an array in ascending order using insertion sort." << endl;
    for (int i = 1; i < size; i++)
    {
        int curr = a[i];
        int prev = i - 1;
        while (prev >= 0 && a[prev] < curr)
        {
            a[prev + 1] = a[prev];
            prev--;
        }
        a[prev + 1] = curr;
    }

    cout << endl;
    cout << "Output of Array:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}