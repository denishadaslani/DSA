#include <iostream>
using namespace std;
class A
{
public:
    void data_a()
    {
        cout << "Data A" << endl;
    }
};
class B : public A
{
public:
    void data_b()
    {
        cout << "Data B" << endl;
    }
};
class C : public B
{
public:
    void data_c()
    {
        cout << "Data C" << endl;
    }
};
int main()
{
    C c;
    c.data_a();
    c.data_b();
    c.data_c();
    return 0;
}