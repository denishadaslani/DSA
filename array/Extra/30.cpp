#include <iostream>
using namespace std;

int main()
{
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;
    int a[size1];
    cout << "Enter elements of first array:" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> size2;
    int b[size2];
    cout << "Enter elements of second array:" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter the value [" << i << "]: ";
        cin >> b[i];
    }

    cout << "Intersection (common elements in both arrays):" << endl;
    bool found = false; // Flag to track if any intersection found

    for (int i = 0; i < size1; i++)
    {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = 0; j < size2; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found)
    {
        cout << "No intersection found.";
    }

    cout << endl;
    return 0;
}
