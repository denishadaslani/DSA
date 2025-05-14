#include <iostream>
using namespace std;
main()
{
    int i;
    int sum = 0;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
             cout<<""<<i<<endl;
            sum = sum + i;
        }
        i++;
    }
    cout << "Sum of odd numbers "<<n<<"is " << sum;
}
