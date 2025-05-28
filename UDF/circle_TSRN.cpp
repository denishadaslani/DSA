#include <iostream>
using namespace std;
void circle(int r);
main()
{
    circle(5);
    circle(10);
    circle(2);
}

void circle( int r)
{
    float ans;
    ans = 3.14 * r * r;
    cout << "Area of circle = " << ans << endl;
}
