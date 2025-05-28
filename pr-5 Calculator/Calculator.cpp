#include <iostream>
using namespace std;
#include "function.cpp"

int main()
{
    int num1, num2, ch, result;
    do
    {
        cout << "Press 1 for Addition(+)" << endl;
        cout << "Press 2 for Subtraction(-)" << endl;
        cout << "Press 3 for Multiplication(*)" << endl;
        cout << "Press 4 for Division(/)" << endl;
        cout << "Press 5 for Modulus(%%)" << endl;
        cout << "Press 0 for the exit" << endl;

        cout << "Enter Your Choice:-";
        cin >> ch;

        cout << endl;

        if (ch >= 1 && ch <= 5)
        {
            cout << "Enter First Number:-";
            cin >> num1;

            cout << "Enter Second Number:-";
            cin >> num2;
        }
        else if (ch == 0)
        {
            break;
        }

        switch (ch)
        {

        case 1:
            result = Addition(num1, num2);
            cout << "Addition of " << num1 << " and " << num2 << " is:-" << result << endl;
            break;

        case 2:
            result = Subtraction(num1, num2);
            cout << "Subtraction of " << num1 << " and " << num2 << " is:-" << result << endl;
            break;

        case 3:
            result = Multiplication(num1, num2);
            cout << "Multiplication of " << num1 << " and " << num2 << " is:-" << result << endl;
            break;

        case 4:
            result = Division(num1, num2);
            cout << "Division of " << num1 << " and " << num2 << " is:-" << result << endl;
            break;

        case 5:
            result = Modulus(num1, num2);
            cout << "Modulus of " << num1 << " and " << num2 << " is:-" << result << endl;
            break;

        default:
            cout << "Invalid Choice!.Enter valid choice" << endl;
            break;
        }
    } while (ch != 0);
}
