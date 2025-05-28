#include <iostream>
using namespace std;
void circle();
main()
{
    circle();
}

void circle()
{
    int r;
    cout << "Enter radius:";
    cin >> r;
    float ans;
    ans = 3.14 * r * r;
    cout << "Area of circle = " << ans << endl;
}