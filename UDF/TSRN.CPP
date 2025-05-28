#include <iostream>
using namespace std;
void sum(int a, int b);

main()
{
    sum(10, 20);
    sum(1, 2);
    sum(1, 99);
}

void sum(int a, int b)
{
    cout << "Sum of" << "a + b" << " = " << a + b << endl;
}
