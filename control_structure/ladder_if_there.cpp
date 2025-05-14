#include<iostream>
using namespace std;

main(){
	int a,b,c;
	
	cout<<"Enter number Of A:";
	cin>>a;
	cout<<"Enter number Of B:";
	cin>>b;
	cout<<"Enter number Of C:";
	cin>>c;
	
	
	if(a>b && a>c ){
		cout<<"a is max";
	}
	else if(b>a && b>c){
		cout<<"b is max";
	}
	else{
		cout<<"c is max";
	}
}
