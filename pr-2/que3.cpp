#include <iostream>
using namespace std;
main()
{
    int n, rem;

    cout << "Enter the number : ";
    cin >> n;

    rem = n % 10;
   
    while (n >=10)
    {
        n = n /10;
    }
   
    cout << "Sum of first and last digit : " << rem + n;
}