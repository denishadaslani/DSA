#include<iostream>
using namespace std;
main(){
    int num,count=0;
    cout<<"Enter the number : ";
    cin>>num;
    while(num!=0){
        num=num/10;
        count++;
    }
    cout<<"Total number of digits : "<<count;
}