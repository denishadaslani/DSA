#include <iostream>
using namespace std;
main()
{
    int row, col, i, j;

    cout << "input of Array:- " << endl;
    cout << "Enter The number of Row:- ";
    cin >> row;
    cout << "Enter The number of col:-";
    cin >> col;
    int a[row][col];
    cout << "input of Array:- " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter the value [" << i << "][" << j << "]:- ";
            cin >> a[i][j];
        }
    }
    cout << "Output of Array:- " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                cout << a[i][j] << " ";
                sum = sum + a[i][j];
            }
        }
    }
    cout << endl;
    cout << "Sum of Diagonal Elements:- " << sum << endl;
}