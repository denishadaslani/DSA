#include<iostream>
using namespace std;
main(){
	int a,b,c,d;
	cout<<"Enter number of A:";
	cin>>a;
	cout<<"Enter number of B:";
	cin>>b;
	cout<<"Enter number of C:";
	cin>>c;
	cout<<"Enter number of D:";
	cin>>d;
	if(a==b&&b==c&&c==d){
		cout<<"all are equal";
	}
	else{
		if(a>b){
			if(a>c){
				if(a>d){
				cout<<"a is max";
				}	
				else{
				cout<<"d is max";
			}
		}	
		else{
			cout<<"c is max";
		}		
	}
	else{
		if(b>c){
			if(b>d){
				cout<<"b is max";
			}
			else{
				cout<<"d is max";
			}
		}
		else{
			if(c>d){
				cout<<"c is max:";
			}
			else{
				cout<<"d is max";
			}
		}
	}
	}
}
