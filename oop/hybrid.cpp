#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "A class" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "B class" << endl;
    }
};
class C : public B
{
public:
    void show()
    {
        cout << "C class" << endl;
    }
};
int main()
{

    C obj;
    
    obj.show();
    return 0;
}