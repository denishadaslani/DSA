#include <iostream>
using namespace std;
main()
{
    int a = 10;
    int *ptr = &a;

    cout << "Address:-" << ptr << endl;
    cout << "Value:-" << *ptr << endl;
}