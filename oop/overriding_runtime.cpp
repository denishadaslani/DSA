#include <iostream>
using namespace std;

class Shape
{
public:
    // virtual void draw() = 0; // pure virtual function
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};
class Circle : public Shape
{
public:
    void draw() override
    {
        int r;
        float ans;
        cout << "Enter radius of circle:- ";
        cin >> r;
        ans = 3.14 * r * r;
        cout << "Area of circle is:- " << ans << endl;
    }
};
class Triangle : public Shape
{
public:
    void draw() override
    {
        int b, h;
        float ans;
        cout << "Enter base:- ";
        cin >> b;
        cout << "Enter height:- ";
        cin >> h;
        ans = 0.5 * b * h;
        cout << "Area of triangle is:- " << ans << endl;
    }
};
class Rectangle : public Shape
{
public:
    void draw() override
    {
        int l, w;
        float ans;
        cout << "Enter length:- ";
        cin >> l;
        cout << "Enter width:- ";
        cin >> w;
        ans = l * w;
        cout << "Area of rectangle is:- " << ans << endl;
    }
};
int main()
{
    Shape *s;
    Circle c;
    Triangle t;
    Rectangle r;

    s = &c;
    s->draw();

    s = &t;
    s->draw();

    s = &r;
    s->draw();

    return 0;
}