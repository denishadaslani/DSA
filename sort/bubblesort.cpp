#include <iostream>
using namespace std;
int main()
{
    int a[4] = {3, 2, 11, 8};
    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = 0; j < 4 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}