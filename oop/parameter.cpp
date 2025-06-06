#include <iostream>
using namespace std;
class Sum
{

public:
    int a, b;
    Sum(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        this->a = a;
        this->b = b;
        cout << "Sum is " << a + b << endl;
    }
};
int main()
{
    Sum s(10, 20);
    s.display();
    return 0;
}