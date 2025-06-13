#include <iostream>
using namespace std;
class A
{
public:
    void Parent()
    {
        cout << "Parent class " << endl;
    }
};
class B : public A
{
public:
    void Child()
    {
        cout << "Child class " << endl;
    }
};

main()
{
    B b;
    b.Parent();
    b.Child();
}