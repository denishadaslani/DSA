#include <iostream>
using namespace std;
main()
{
    int i = 1;
    int fact = 1;
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    cout<<"Factorial of "<<num<<" is "<<fact;
}