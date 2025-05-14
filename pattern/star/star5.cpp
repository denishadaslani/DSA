#include <iostream>
using namespace std;
main()
{
    int i, j, s;
    for (i = 1; i <= 4; i++)
    {
        for (s = 4; s >= i; s--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << " *";
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << " *";
        }

        cout << endl;
    }
    for (i = 3; i >= 1; i--)
    {
        for (s = 5; s > i; s--)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << " *";
        }
        for (j = i; j >= 2; j--)
        {
            cout << " *";
        }

        cout << endl;
    }
}