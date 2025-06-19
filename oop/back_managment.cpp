#include <iostream>
using namespace std;
class BankAccount
{
public:
    int number, balance;

    void user()
    {
        cout << "Enter Account Number:";
        cin >> number;
        cout << "Enter Account Balance:";
        cin >> balance;
        cout << "Account Number:" << number << endl;
        cout << "Opening Balance:" << balance << endl;
    }
    void deposit()
    {
        int amount;
        cout << "Enter amount to deposit:";
        cin >> amount;
        balance = balance + amount;
        cout << "deposited:" << amount << endl;
    }
    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw:";
        cin >> amount;
        balance -= amount;
        cout << "withdraw:" << amount << endl;
    }
    void totalBalance()
    {
        cout << "Account balance:" << balance << endl;
    }
};
int main()
{
    BankAccount b1;
    b1.user();
    b1.deposit();
    b1.withdraw();
    b1.totalBalance();
    return 0;
}
