#include <iostream>
using namespace std;

int binarchsearch(int a[], int n, int target)
{
    int low = 0;
    int high = n - 1;
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
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int targect = 33;
    int index = binarchsearch(a, n, targect);
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