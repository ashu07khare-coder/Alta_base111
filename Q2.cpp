#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"Before swap:"<<"a= "<<a<<" b= "<<b<<endl;
    // swapping
    int c=a;
    a=b;
    b=c;
    cout<<"After swap:"<<"a= "<<a<<" b= "<<b;
}
