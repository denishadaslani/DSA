#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size of the array: ";
    cin >> size;

    int a[size];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }

    // Start with product of first two elements
    int minProduct = a[0] * a[1];

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int product = a[i] * a[j];
            if (product < minProduct)
            {
                minProduct = product;
            }
        }
    }

    cout << "The smallest product of two elements is: " << minProduct << endl;

    return 0;
}
