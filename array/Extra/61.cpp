#include <iostream>
using namespace std;
int main()
{
    int size, i, j;
    cout << "Enter size of Array:-";
    cin >> size;
    int a[size];
    cout << "Enter Input Of Arrray:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }
    cout << "Output of Array:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Sort an array in ascending order using bubble sort.";
    cout << endl;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            }
        }
    }
    cout << "Sorted Array:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}