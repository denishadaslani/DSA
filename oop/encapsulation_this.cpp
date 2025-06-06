#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;
    int age;

public:
    void setname(string name, int rollno, int age)
    {
        this->name = name;
        this->rollno = rollno;
        this->age = age;
    }
    void display()
    {
        cout << "Name:-" << this->name << endl;
        cout << "Roll no:-" << this->rollno << endl;
        cout << "Age:-" << this->age << endl;
        cout << "------------------------------------" << endl;
    }
};

int main()
{
    Student s1, s2, s3, s4;
    s1.setname("Denisha", 1, 20);
    s2.setname("Ayushi", 2, 20);
    s3.setname("purvisha", 3, 20);
    s4.setname("metha", 4, 20);

    s1.display();
    s2.display();
    s3.display();
    s4.display();
}