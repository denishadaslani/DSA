#include <iostream>
using namespace std;
class student
{
public:
    int age;
    string name;
    void display()
    {
        cout << "Name:-" << name
             << "Age:-" << age;
    }
};

main()
{
    student s1[4];
    int n, age, i;
    string name;
    cout << "insert number of Record:- ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Name:-";
        cin >> name;
        cout << "Enter Age:-";
        cin >> age;
    }

    for (int i = 0; i < n; i++)
    {

        s1[i].age = age;
        s1[i].name = name;
        s1[i].display();
        cout << endl;
    }
}