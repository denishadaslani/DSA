#include <iostream>
using namespace std;
class Student
{

public:
    int x;
    void data();
    void sum();
    void Checkage(int age);
};
void Student::data()
{
    x = 10;
    cout << "Value of x is  : " << x << endl;
}
void Student::sum()
{
    int a, b;
    cout << "Enter number a :";
    cin >> a;
    cout << "Enter number b :";
    cin >> b;

    cout << "Sum is " << a + b << endl;
}
void Student::Checkage(int age)
{
    if (age >= 18 && age <= 100)
    {
        cout << "You can vote" << endl;
    }
    else
    {
        cout << "You can't vote" << endl;
    }
    cout << "Age is " << age << endl;
}

int main()
{
    Student s1;
    s1.data();
    s1.sum();
    s1.Checkage(20);
    return 0;
}