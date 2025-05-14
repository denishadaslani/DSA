#include<iostream>
using namespace std;
main(){
	float Principal,rate,time,simpleinterest;
	cout<<"Enter Principal(p):";
	cin>>Principal;
	cout<<"Enter rate(r):";
	cin>>rate;
	cout<<"Enter time(t):";
	cin>>time;
	
	simpleinterest = (Principal*rate*time)/100;
	cout<<"Ans:"<<simpleinterest;
}


