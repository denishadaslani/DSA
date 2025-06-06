#include <iostream>
using namespace std;

class Account
{
public:
    int acno;
    string name;
    static string bank;
    void SetDetails(int acno, string name)
    {
        this->acno = acno;
        this->name = name;
    }
    void display()
    {
        cout << "Account no:-" << acno << " Name:- " << name << " Bank:- " << bank << endl;
    }
};

string Account::bank = "SBI";

int main()
{
    Account a1, a2;
    a1.SetDetails(1, "Denisha");
    a2.SetDetails(2, "Ayushi");

    a1.display();
    a2.display();

    return 0;
}