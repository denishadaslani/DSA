#include <iostream>
using namespace std;
class Salary
{
private:
    int Salary;

public:
    void setSalary(int s)
    {
        Salary = s;
    }
    void getSalary()
    {
        cout << "Salary is: " << Salary << endl;
    }
};
int main()
{
    Salary s;
    s.setSalary(1000);
    s.getSalary();
    return 0;
}