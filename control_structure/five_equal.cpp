#include<iostream>
using namespace std;
main(){
	int a,b,c,d,e;
	cout<<"Enter no of A:";
	cin>>a;
	cout<<"Enter no of B:";
	cin>>b;
	cout<<"Enter no of C:";
	cin>>c;
	cout<<"Enter no of D:";
	cin>>d;
	cout<<"Enter no of E:";
	cin>>e;
	if(a==b&&b==c&&c==d&&d==e){
		cout<<"All are equal";
	}
	else{
		if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					cout<<"a is max";
				}
				else{
					cout<<"e is max";
				}
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
				if(b>e){
					cout<<"b is max";
				}
				else{
					cout<<"e is max";
				}
			}
			else{
				cout<<"d is max";
			}
		}
		else{
			if(c>d){
				if(c>e){
					cout<<"c is max";
				}
				else{
					cout<<"e is max";
				}
			}
			else{
				if(d>e){
					cout<<"d is max";
				}
				else{
					cout<<"e is max";
				}
			}
		}
	}
	}
}
