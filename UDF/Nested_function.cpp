#include <iostream>
using namespace std;
void Arthematic();
void sum();
main()
{
    Arthematic();
}
void Arthematic()
{
    sum();
}
void sum()
{
    int a = 20, b = 20;
    cout << "sum:- " << a + b;
}