#include <iostream>
using namespace std;
main()
{
    int i, j, row, col;
    cout << "Enter The Row:-";
    cin >> row;
    cout << "Enter The Column:-";
    cin >> col;
    int a[row][col];
    cout << "Input of Array:-" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter the value [" << i << "][" << j << "]:-";
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "Output of Array:-" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Antidiagonal of Array:-" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j || i + j == row - 1)
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
