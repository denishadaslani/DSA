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
    cout << "Transpose matrix:-" << endl;
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {

            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}