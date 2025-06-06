#include <iostream>
using namespace std;

class Employee
{
public:
    string EmployeeName;
    int EmployeeId;

    void display()
    {
        cout << "Employee Name:-" << EmployeeName << endl;
        cout << "Employee Id:-" << EmployeeId << endl;
    }
    void setName(string name){
        EmployeeName = name;
    }
};

int main()
{
    Employee e1;
    e1.EmployeeName = "Denisha";
    e1.EmployeeId = 1;
    e1.setName("denu");
    e1.display();
    return 0;
}