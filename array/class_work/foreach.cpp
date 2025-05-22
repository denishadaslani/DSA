#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter The size of Array:-";
    cin >> n;
    int arr[n];
    cout << "Input OF The Array Element:-" << endl;
    for (int &num : arr)
    {
        cout << "Enter the value [" << num << "]:";
        cin >> num;
    }
    cout << "Output of Array Element:-";
    for (int x : arr)
    {
        cout << x << " ";
    }
}