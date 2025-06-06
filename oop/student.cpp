#include <iostream>
using namespace std;

class Student
{
    

public:
    string name, age;
    void display()
    {
        cout << "student name:-" << name << endl;
        cout << "student age:-" << age;
    }
};

int main()
{
    Student s1;
    s1.name = "Denisha";
    s1.age = "20";
    s1.display();
    return 0;
}