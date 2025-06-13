#include <iostream>
using namespace std;
class Shape
{
public:
    virtual float setdata(float r = 10.5) = 0;
    virtual float getdata() = 0;
};
class Circle : public Shape
{
public:
    float ans;
    float setdata(float r = 10.5) override
    {
        ans = 3.14 * r * r;
    }
    float getdata() override
    {
        return ans;
    }
};
int main()
{
    Shape *s = new Circle();
    s->setdata();
    cout << " area of circle:- " << s->getdata() << endl;
    return 0;
}