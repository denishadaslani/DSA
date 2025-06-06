#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of size: ";
    cin >> n;

    int arr[n]; // Assuming max 100 elements, adjust if needed

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << "[" << i << "] " << ": ";
        cin >> arr[i];
    }

    int primeCount = 0;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (num < 2)
        {
            continue;
        }

        bool isPrime = true;
        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            primeCount++;
        }
    }

    cout << "Count of prime numbers in the array: " << primeCount << endl;

    return 0;
}
