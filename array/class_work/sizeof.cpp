#include <iostream>
using namespace std;
main()
{
    int a = 10;
    float b = 10.8;
    char c = 'a';
    double d = 1000.8;
    cout << "Size of a = " << sizeof(a) << " bytes" << endl;
    cout << "Size of b = " << sizeof(b) << " bytes" << endl;
    cout << "Size of c = " << sizeof(c) << " bytes" << endl;
    cout << "Size of d = " << sizeof(d) << " bytes" << endl;
    cout << endl;
    cout << endl;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of Array = " << size << endl;
}