#include<iostream>
using namespace std;
 main()
{
    int score;
    cout<<"Enter your score:";
    cin>>score;

    char grade;
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70)  ? 'C' :
            (score >= 60)  ? 'D' :
            (score >= 50)  ? 'E' :
            'F';
  
     cout << "Your grade is " << grade <<".";

    if(grade>='A' && grade<='E')
    {
		  printf("you are eligible for the next level..");
    }
    else
    {
		 printf("please try again next time.. ");
    }
    
}