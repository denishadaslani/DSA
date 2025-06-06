#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of Array :-";
    cin >> n;

    int arr[n]; 

    // Input elements
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)

    {
        int num = arr[i];

        int isPerfectSquare = 0;

        for (int j = 1; j <= num; j++)

        {

            if (j * j == num)
            {
                isPerfectSquare = 1;
                break;
            }
            else if (j * j > num)
            {
                break;
            }
        }

        if (isPerfectSquare == 1)
        {
            count++;
        }
    }

    cout << "Count of perfect square numbers: " << count << endl;

    return 0;
}
