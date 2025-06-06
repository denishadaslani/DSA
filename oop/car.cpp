#include <iostream>
using namespace std;

class Car
{
public:
    void Details()
    {
        cout << "Welcome to the world of Cars" << endl;
    }

};
int main()
{
    Car c;
    c.Details();
    return 0;
}