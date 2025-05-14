#include <iostream>
using namespace std;
main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (s = 4; s >= i; s--)
        {
            cout << "    ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}