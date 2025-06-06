#include <iostream>
using namespace std;

int main()
{
    int n, target;

    // Get array size and target sum
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100]; // assuming max size 100 for simplicity

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    int count = 0;

    // Brute-force: check all subarrays
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == target)
            {
                count++;
            }
        }
    }

    cout << "Total subarrays with sum = " << target << " is: " << count << endl;

    return 0;
}
