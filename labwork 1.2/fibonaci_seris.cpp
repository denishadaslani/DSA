#include<iostream>
using namespace std;
main(){
    int n,a=0,b=1,c;
    cout<<"Enter a number : ";
    cin>>n;
    
    cout<<"fibonaci series : ";
    for(int i=0;i<=n;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }

    }

