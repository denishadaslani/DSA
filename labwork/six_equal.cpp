#include<iostream>
using namespace std;

main(){
	int a,b,c,d,e,f;
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
	cout<<"Enter no of F:";
	cin>>f;
	if(a==b && b==c && c==d && d==e && e==f){
			cout<<"All are equal";
	}
	else{
			if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					if(a>f){
						cout<<"a is max";
					}
					else{
						cout<<"f is max";
					}
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
					if(b>f){
						cout<<"b is max";
					}
					else{
						cout<<"f is max";
					}
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
					if(c>f){
						cout<<"c is max";
					}
					else{
						cout<<"f is max";
					}
				}
				else{
					cout<<"e is max";
				}
			}
			else{
				if(d>e){
					if(d>f){
						cout<<"d is max";
					}
					else{
						cout<<"f is max";
					}
				}
				else{
					if(e>f){
						cout<<"e is max";
					}
					else{
						cout<<"f is max";
					}
				}
			}
		}
	}
	}

}
