#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << "sum:-" << add<int>(10, 20) << endl;
    cout << "sum:-" << add<double>(10.0, 20.5) << endl;

    return 0;
}