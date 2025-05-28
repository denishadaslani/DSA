#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not prime." << endl;
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is prime." << endl;
    } else {
        cout << n << " is not prime." << endl;
    }

    return 0;
}
