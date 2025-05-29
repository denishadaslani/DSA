#include <iostream>
using namespace std;
main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    cout << "value of a:-" << a << endl;
    cout << "value of a:-" << *p << " Address of p " << p << endl;
    cout << "value of a:-" << **q << " Address of q " << q << endl;
}