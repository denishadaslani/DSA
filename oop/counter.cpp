#include <iostream>
using namespace std;
class counter
{
public:
    static int count;
    static void increment()
    {
        count++;
        cout << "count :-" << count << endl;
    }
};
int counter::count = 0;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        counter::increment();
    }

    return 0;
}