// Largest Element In 2D array

#include <iostream>
using namespace std;
main()
{
    int row, col, i, j;

    cout << "Enter The Row:-";
    cin >> row;

    cout << "Enter The Column:-";
    cin >> col;

    int a[row][col];

    cout << "Input Of Array Elemnet:-" << endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter the value [" << i << "][" << j << "]:-";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl;

    int Max = a[0][0];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] > Max)
            {
                Max = a[i][j];
            }
        }
    }

    cout << "Largest Element Is:-" << Max;
}