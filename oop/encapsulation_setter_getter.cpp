#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;
    int age;

public:
    void setname(string n, int r, int a)
    {
        name = n;
        rollno = r;
        age = a;
    }
    void display()
    {
        cout << "Name:-" << name << endl;
        cout << "Roll no:-" << rollno << endl;
        cout << "Age:-" << age << endl;
        cout << "------------------------------------"<<endl;
    }
};

int main()
{
    Student s1, s2, s3;
    s1.setname("Denisha", 1, 20);
    s2.setname("denu", 2, 20);
    s3.setname("Deni", 3, 20);
    s1.display();
    s2.display();
    s3.display();
}