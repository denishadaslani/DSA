
#include <iostream>
using namespace std;
void ioc(int x);
main()
{
    int a = 10;
    ioc(a);
    cout << "After value :- " << a << endl;
}

void ioc(int x)
{
    x = x + 1;
    cout << "Before value:- " << x << endl;
}
