#include <iostream>
using namespace std;
class Student
{
public:
    int age;
    string name;
    void display()
    {
        cout << "Name:-" << name << endl;
        cout << "Age:-" << age;
    }
};

main()
{
    Student s1[4];
    s1[0].name = "Denisha";
    s1[0].age = 20;
    s1[1].name = "Ayushi";
    s1[1].age = 20;
    s1[2].name = "Purvisha";
    s1[2].age = 20;
    s1[3].name = "Metha";
    s1[3].age = 20;
    for (int i = 0; i < 4; i++)
    {
        s1[i].display();
        cout << endl;
    }
}