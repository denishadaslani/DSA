#include <iostream>
using namespace std;

int main()
{
    int i, r, rev = 0;
    cout << "Enter the number : ";
    cin >> i;

    int no = i; // Make a copy of the input to preserve original value

    while (no > 0)
    {
        r = no % 10;
        rev = rev * 10 + r;
        no = no / 10;
    }

    if (rev == i) // Compare with original number
    {
        cout << "The number is palindrome.";
    }
    else 
    {
        cout << "The number is not palindrome.";
    }

    return 0;
}
