#include<iostream>
using namespace std;

main(){
	int a,b,c;
	cout<<"Enter Number of A:";
	cin>>a;
	cout<<"Enter Number of B:";
	cin>>b;
	cout<<"Enter Number of C:";
	cin>>c;
	if(a==b && a==c && c==a ){
		cout<<"All are equal";
	}
	else{
		if(a>b){
		if(a>c){
			cout<<"A is max";
		}
		else{
			cout<<"C is max";
		}
	}
	else{
		if(b>c){
			cout<<"B is max";
		}
		else{
			cout<<"C is max";
		}
	}
	}
}
