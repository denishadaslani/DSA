#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B
{
public:
    int b;
};
class C : public A, public B
{
public:
    void sum()
    {
        cout << "Enter number a :";
        cin >> a;
        cout << "Enter number b :";
        cin >> b;
        cout << "Sum is " << a + b << endl;
    }
};
int main()
{
    C c1;
    c1.sum();
}