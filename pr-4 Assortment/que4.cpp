// Sum of Element in Row & Columan oF 2D Array

#include <iostream>
using namespace std;
main()
{
    int row, col, i, j;

    cout << "Enter Row:-";
    cin >> row;

    cout << "Enter col:-";
    cin >> col;

    int a[row][col];

    cout << "Input Of Array Element:-" << endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter the value [" << i << "][" << j << "]:-";
            cin >> a[i][j];
        }
        cout << endl;
    }
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
    cout << "Output of Row:-" << endl;

    int RowNumber;

    cout << "Enter Row number:-";
    cin >> RowNumber;

    int Sum = 0;
    for (i = 0; i < col; i++)
    {
        cout << a[RowNumber][i] << " ";
        Sum = Sum + a[RowNumber][i];
    }
    cout << "Sum of Row:-" << Sum;

    cout << endl;
    cout << "Output of Columan:-" << endl;

    int ColumanNumber;

    cout << "Enter Columan number:-";
    cin >> ColumanNumber;

    int Sum1 = 0;
    for (i = 0; i < row; i++)
    {
        cout << a[i][ColumanNumber] << " ";
        Sum1 = Sum1 + a[i][ColumanNumber];
    }
    cout << "Sum of Columan:-" << Sum1;
}
