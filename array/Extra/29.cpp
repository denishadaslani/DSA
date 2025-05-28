#include <iostream>
using namespace std;

int main()
{
    int size1, size2;

    cout << "Enter size of first array (A): ";
    cin >> size1;
    int a[size1];
    cout << "Enter elements of array A:" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }

    cout << "Enter size of second array (B): ";
    cin >> size2;
    int b[size2];
    cout << "Enter elements of array B:" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> b[i];
    }

    cout << "Elements in A but not in B (A - B):" << endl;

    for (int i = 0; i < size1; i++)
    {
        bool isCommon = false;
        for (int j = 0; j < size2; j++)
        {
            if (a[i] == b[j])
            {
                isCommon = true;
                break;
            }
        }
        if (!isCommon)
        {
            cout << a[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
