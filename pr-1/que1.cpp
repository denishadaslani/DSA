
#include <iostream>
using namespace std;
main()
{
    int score;
    cout << "Enter score:";
    cin >> score;
    char grade = (score >= 90) ? 'A':
                (score >= 80) ? 'B' :
                (score >= 70)   ? 'C':
                (score >= 60)   ? 'D':
                (score >= 50)   ? 'E':
                'F';
    cout << "your grade is " << grade;
}