
// Merge two  arrays into one array.
#include <iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter the size of first array:- ";
    cin >> size1;
    int a[size1];
    cout << "Enter the elements of first array:-" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the value [" << i << "]:- ";
        cin >> a[i];
    }

    cout << "Enter the size of second array:- ";
    cin >> size2;
    int b[size2];
    cout << "Enter the elements of second array:-" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter the value [" << i << "]:- ";
        cin >> b[i];
    }

    int c[size1 + size2];

    cout << "Merge two arrays:-" << endl;
    for (int i = 0; i < size1; i++)
    {
        c[i] = a[i];
    }
    for (int i = size1; i < size1 + size2; i++)
    {
        c[i] = b[i - size1];
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << c[i] << " ";
    }
}
