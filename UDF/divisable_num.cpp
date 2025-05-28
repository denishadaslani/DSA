#include <iostream>
using namespace std;
void divisible_num();

int main() {
     divisible_num();
}

void divisible_num() {
    float num1, num2, result;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Error: Division by zero is not possible." << endl;
    } else {
        result = num1 / num2;
        cout << "Result of division is: " << num1 << " / " << num2 << " = " << result << endl;
    }
}


