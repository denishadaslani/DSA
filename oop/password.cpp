#include <iostream>
using namespace std;
int main()
{

    char str[100];

    cout << "Create your password:";
    cin >> str;
    int isupper;
    int islower;
    int isdigit;
    int issymbol;
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++, len++)
        ;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (len >= 6)
        {
            if ((str[i] >= 'A' && str[i] <= 'Z'))
            {
                isupper = 0;
            }
            else if ((str[i] >= 'a' && str[i] <= 'z'))
            {
                islower = 0;
            }
            else if ((str[i] >= '0' && str[i] <= '9'))
            {
                isdigit = 0;
            }

            else
            {
                issymbol = 0;
            }
        }
    }

    if (isupper == 0 && islower == 0 && isdigit == 0 && issymbol == 0)
    {
        printf("your password is strong");
    }
    else
    {
        printf("your password is not strong");
    }
}
