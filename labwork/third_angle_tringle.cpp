#include<iostream>
using namespace std;

main(){
	float angle1,angle2,angle3;
	
	cout<<"Enter first angle of triangle:";
	cin>>angle1;
	cout<<"Enter second angle of triangle:";
	cin>>angle2;
	angle3 = 180 - (angle1+angle2);
	cout<<"Third angle of the triangle is: "<< angle3;
	
}
