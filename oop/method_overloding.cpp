#include <iostream>
using namespace std;
class A
{
public:
    // int a, b;
    void add(int a, int b)
    {
        cout << "Addtion of two number:- " << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Subtraction of two number:- " << a - b - c << endl;
    }
    void add(int a, int b, int c, int d)
    {
        cout << "Multiplication of two number:- " << a * b * c * d << endl;
    }
    void add(int a, int b, int c, int d, int e){
        cout<<"Division of two number:- "<<a/b/c/d/e<<endl;
    }
    void add(double a, double b){
        cout<<"Division of two number:- "<<a+b<<endl;
    }
};
int main()
{
    A a1;
    a1.add(10, 20);
    a1.add(20, 10, 30);
    a1.add(10, 20, 30, 40);
    a1.add(10, 20, 30, 40, 50);
    a1.add(10.0, 20.0);
    

    return 0;
}
