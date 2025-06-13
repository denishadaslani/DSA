#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};
class Circle : public Shape{
public:
    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }
};
class Triangle : public Shape{
public:
    void draw() override
    {
        cout << "Drawing a triangle" << endl;
    }
};
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a rectangle" << endl;
    }
};
int main()
{
    Shape *s1;
    Circle c1;
    Triangle t1;
    Rectangle r1;

    s1 = &c1;
    s1->draw();

    s1 = &t1;
    s1->draw();

    s1 = &r1;
    s1->draw();
    
    return 0;
}