#include <iostream>
using namespace std;

class Bank
{
private:
    int acc_no;
    string acc_name;
    float balance;

public:
    void setdetails(int acc_no, string acc_name, float balance)
    {
        this->acc_no = acc_no;
        this->acc_name = acc_name;
        this->balance = balance;
    }

    int accno()
    {
        return acc_no;
    }
    float deposit()
    {
        float balance;
        cout << "Enter amount to deposit : ";
        cin >> balance;
        this->balance += balance;
        return this->balance;
    }
    float withdraw()
    {
        float balance;
        cout << "Enter amount to withdraw : ";
        cin >> balance;
        this->balance -= balance;
        return this->balance;
    }
    void getdetails()
    {

        cout << "Account Number : " << acc_no << endl;
        cout << "Account Name : " << acc_name << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    Bank b1[5];
    int ch;
    int cnt = 0, i;
    int acc_no;
    string accname;
    float balance;
    int check;
    while (1)
    {

        cout << "press 1 for Create Account" << endl;
        cout << "press 2 for Check Balance" << endl;
        cout << "press 3 for Deposit" << endl;
        cout << "press 4 for Withdraw" << endl;
        cout << "press 5 for Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        if (ch == 5)
        {
            cout << "------Thank you------" << endl;
            break;
        }
        switch (ch)
        {
        case 1:
            cout << "Enter Account Number : ";
            cin >> acc_no;
            cout << "Enter Account Name : ";
            cin >> accname;
            cout << "Enter Account Balance : ";
            cin >> balance;
            cout << "--------account successfully created--------" << endl;
            b1[cnt].setdetails(acc_no, accname, balance);
            cnt++;
            break;

        case 2:
            cout << "Enter Account Number : ";
            cin >> acc_no;
            check = 0;
            for (i = 0; i < cnt; i++)
            {
                if (b1[i].accno() == acc_no)
                {
                    check = 1;
                    b1[i].getdetails();
                    break;
                }
            }
            if (check == 0)
            {
                cout << "Account not found" << endl;
            }
            cout << "-------check balance-------" << endl;
            break;

        case 3:

            cout << "Enter Account Number : ";
            cin >> acc_no;
            check = 0;
            for (i = 0; i < cnt; i++)
            {
                if (b1[i].accno() == acc_no)
                {
                    check = 1;
                    b1[i].deposit();
                }
            }
            if (check == 0)
            {
                cout << "Account not found" << endl;
            }

            cout << "-------deposit amount-------" << endl;
            break;
        case 4:
            cout << "Enter Account Number : ";
            cin >> acc_no;
            check = 0;
            for (i = 0; i < cnt; i++)
            {
                if (b1[i].accno() == acc_no)
                {
                    check = 1;
                    b1[i].withdraw();
                }
            }
            if (check == 0)
            {
                cout << "Account not found" << endl;
            }
            cout << "-------withdraw amount-------" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
