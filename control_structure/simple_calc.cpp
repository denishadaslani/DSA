#include <iostream>
using namespace std;
main()
{
    int a, b;
    char ch;
    cout << "Enter 1 for addition" << endl;
    cout << "Enter 2 for subtraction" << endl;
    cout << "Enter 3 for multiplication" << endl;
    cout << "Enter 4 for division" << endl;
    cout << "Enter Your Choice:-";
    cin >> ch;
    cout << "Enter Value of A:-";
    cin >> a;
    cout << "Enter Value of B:-";
    cin >> b;
    switch (ch)
    {
    case '1':
        cout << "Addition is:-" << a + b << endl;
        break;
    case '2':
        cout << "Subtraction is:-" << a - b << endl;
        break;
    case '3':
        cout << "Multiplication is:-" << a * b << endl;
        break;
    case '4':
        cout << "Division is:-" << a / b << endl;
        break;
    default:
        cout << "Invalid Choice!!";
        break;
    }
}