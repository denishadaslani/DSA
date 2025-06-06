#include <iostream>
using namespace std;
class Employee
{

public:
    Employee()
    {
        cout << "Employee Created" << endl;
    }
};

int main()
{
    Employee e1;
    return 0;
}