#include <iostream>
using namespace std;

class Student
{
public:
    int rollno;
    int age;
    string name;
    static string college;
    void SetDetails(int rollno, int age, string name)
    {
        this->rollno = rollno;
        this->age = age;
        this->name = name;
    }
    void display()
    {
        cout << "Name:-" << name << endl;
        cout << "Roll no:-" << rollno << endl;
        cout << "Age:-" << age << endl;
    }

    static void displayCollege()
    {
        cout << "College name:- " << college << endl;
    }
};

string Student::college = "sutex college";

int main()
{
    Student s1, s2;
    s1.SetDetails(1, 20, "Denisha");
    s1.display();
    Student::displayCollege();
    s2.SetDetails(2, 19, "Denisha");
    s2.display();
    Student::displayCollege();

    return 0;
}