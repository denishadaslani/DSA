#include <iostream>
using namespace std;

int linearsearch(int a[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            return i;
        }
    }
    return -1;
};
int main()
{
    int a[5] = {10, 11, 15, 18, 20};
    int n = 5;
    int target = 20;
    int index = linearsearch(a, n, target);
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