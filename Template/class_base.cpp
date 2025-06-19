#include <iostream>
using namespace std;
template <class T>
class Box
{
public:
    T value;

    void setvalue(T a, T b)
    {
        value = a;
        value = b;
    }
    T getvalue(T a, T b)
    {
        return a + b;
    }
};
int main()
{
    Box<int> b1;
    b1.setvalue(10, 20);
    cout << "Value:-" << b1.value << endl;
    Box<float> b2;
    b2.setvalue(10.5, 10.5);
    cout << "Value:-" << b2.value << endl;
    return 0;
}