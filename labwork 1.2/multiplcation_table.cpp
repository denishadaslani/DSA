#include<iostream>
using namespace std;
main(){
    int i=1;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    while(i<=10)
    {
    
    cout << num << " x " << i << " = " << num * i << endl;
       i++;
    }
}
