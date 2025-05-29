#include <iostream>
using namespace std;
main()
{
    int a = 10;
    int &ref = a;

    cout << "Address of ref:- " << &ref << endl;
    cout << "Address of a:- " << &a << endl;
     cout << "Value of ref:- " << ref << endl;
    cout << "Value of a:- " << a << endl;
}