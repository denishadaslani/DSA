#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {

            return i;
        }
    }
    return -1;
};

int main()
{
    int size;

    cout << "Enter array size :- ";
    cin >> size;
    int a[size];
    cout << "input of array:-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value [" << i << "]:- ";
        cin >> a[i];
    }
    cout << endl;
    cout << "Enter the target element value:- ";

    int target;
    cin >> target;
    int index = linearSearch(a, size, target);

    if (index != -1)
    {
        cout << "Element found at index :" << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    cout << endl;
    return 0;
}