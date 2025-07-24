#include <iostream>
using namespace std;
int main()
{
    int size, i, j;
    cout << "Enter the size of Array:-";
    cin >> size;
    int a[size];
    cout << "Input of Array Element :-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }
    cout << endl;
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Sort an array in ascending order using selection sort.";
    for (i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (j = i + 1; j < size; j++)
        {
            if (a[j] < a[minindex])
            {
                minindex = j;
            }
        }
        int c = a[i];
        a[i] = a[minindex];
        a[minindex] = c;
    }
    cout << endl;
    cout << "Output of Array Element:-" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
