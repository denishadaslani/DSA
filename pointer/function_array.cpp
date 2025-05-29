#include <iostream>
using namespace std;

void arrfunc(int a[], int size);

main()
{
    int a[5] = {1, 2, 3, 4, 5};
    arrfunc(a, 5);
}
void arrfunc(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }
}
