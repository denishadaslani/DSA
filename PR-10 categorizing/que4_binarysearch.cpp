#include <iostream>
using namespace std;

void sortedarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int binarysearch(int a[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
};

int main()
{
    int size, target;
    cout << "Enter array size :- ";

    cin >> size;
    int a[size];

    cout << "input of array:-" << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:- ";
        cin >> a[i];
    }
    cout << endl;

    sortedarray(a, size);
    cout << endl;

    cout << "output of array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "]:- ";
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Enter the target element value:- ";
    cin >> target;

    int index = binarysearch(a, size, target);
    if (index != -1)
    {
        cout << "Element found at index :" << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}