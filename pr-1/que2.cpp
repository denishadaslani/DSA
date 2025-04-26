#include <iostream>
using namespace std;
main()
{
    int score;
    cout << "Enter score:";
    cin >> score;

    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                                   : (score >= 70)   ? 'C'
                                   : (score >= 60)   ? 'D'
                                   : (score >= 50)   ? 'E'
                                                     : 'F';

    switch (grade)
    {
    case 'A':
        cout << "your grade is A. Excellent work !";
        break;
    case 'B':
        cout << "your grade is B. Well done ";
        break;
    case 'C':
        cout << "your grade is C. Good job ";
        break;
    case 'D':
        cout << "your grade is D. you passed, but you could do better ";
        break;

    case 'F':
        cout << "your grade is F. sorry, you failed ";
        break;
    default:
        cout << "Invalid score";
        break;
    }
}