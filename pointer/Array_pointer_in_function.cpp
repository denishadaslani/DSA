#include <iostream>
using namespace std;

void update(int *p);
main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    update(p);
}
void update(int *p)
{

    for (int i = 0; i < 5; i++)
    {
        cout << *p << " ";
        p++;
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << (*p + 1) << endl;
    //     p++;
    // }
}