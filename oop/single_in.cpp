#include <iostream>
using namespace std;
class A
{
public:
    int age;
    void printage()
    {
        cout << "Enter the age :-";
        cin >> age;
        cout << "Age is :-" << age << endl;
    }
};
class B : public A
{
public:
    void checkage()
    {
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

main()
{
    B b1;
    b1.printage();
    b1.checkage();
}