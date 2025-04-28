#include<iostream>
using namespace std;

main()
{
	int marks;
	char grade;

	
	cout<< "Enter your marks:";
    cin>>marks;



  grade = (marks>=90 && marks<=100)
				?'A'
				:(marks>=80 && marks<90)
							?'B'
							:(marks>=70 && marks<80)
										? 'C'
										:(marks>=50 && marks<70)
													? 'D'
													:(marks>=33 && marks<50)
																?'E'
                                                                :'F';
                                                                
																

    cout<<"your grade is "<<grade<<".";
switch(grade)
{

		case 'A':
		case 'a':
			cout<<"Excellent work!";
			break;

		case 'B':
		case 'b':
		   cout << "Well done.";
			break;


		case 'C':
		case 'c':
			 cout<<"Good job.";
			break;

		case 'D':
		case 'd':
		 cout<<"you passed,but you could do better.";
			break;

		case 'E':
		case 'e':
			cout<<"you could do better.";
			break;

		case 'F':
		case 'f':
			cout<<"soory,you failled.";
			break;

         default:
             cout<<"invalid grade.";
             break;


     }

   if(grade>='A' && grade<='E')
    {
        cout<<"you are eligible for the next level..";
    }
    else
    {
		
        cout<<"please try again next time..";
    }




}