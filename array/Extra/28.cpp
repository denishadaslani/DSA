// Find the union of two arrays.
#include <iostream>
using namespace std;
main()
{
    int size1, size2;
    cout << "Enter the size of first array:-";
    cin >> size1;
    int a[size1];
    cout << "Enter the elements of first array:-" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> a[i];
    }

    
    cout << "Enter the size of second array:-";
    cin >> size2;
    int b[size2];
    cout << "Enter the elements of second array:-" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter the value [" << i << "]:-";
        cin >> b[i];
    }

    cout << "Union of both the arrays:-" << endl;

    for (int i = 0; i < size1; i++)
    {
        cout << a[i] << " " << endl;
    }
    for (int i = 0; i < size2; i++)
    {
        cout << b[i] << " " << endl;
    }

    
}