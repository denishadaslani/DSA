#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter the size of square matrix (n): ";
    cin >> n;

    int size = n * n;
    int a[size];

    cout << "Input of Array:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }

    cout << "\nOutput of Array:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

   
    int diagonalSum = 0;
    for (i = 0; i < n; i++)
    {
        int index = i * n + i;
        cout << "i = " << i << "  index = " << index << "  value = " << a[index] << endl;
        diagonalSum += a[index];
    }

    cout << "Sum of diagonal elements: " << diagonalSum << endl;

}
