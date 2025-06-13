#include <iostream>
using namespace std;
class A
{
public:
    int age;
};
class B : public A
{
public:
    void printage()
    {
        cout << "Enter the age :-";
        cin >> age;
        cout << "Age is :-" << age << endl;
    }
};

class C : public A
{
public:
    void checkage()
    {
        B b1;
        b1.printage();
        if (age >= 18)
        {
            cout << "You can vote" << endl;
        }
        else
        {
            cout << "You can't vote" << endl;
        }
    }
};
int main()
{

    C c1;
    c1.checkage();
    return 0;
}