#include <iostream>
using namespace std;
class Calculator
{
public:
    int a, b;
    int setsum(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << "Sum of a and b:- " << a + b << endl;
        cout << "Sub of a and b:- " << a - b << endl;
        cout << "Mul of a and b:- " << a * b << endl;
        cout << "Div of a and b:- " << a / b << endl;
        cout << "mod of a and b:- " << a % b << endl;
    }
};
int main()
{
    Calculator Mycalculator;
    Mycalculator.setsum(10, 20);
    Mycalculator.getdata();
    return 0;
}