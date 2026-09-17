#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first operand: ";
    cin>>a;
    cout<<"Enter the second operand ";
    cin>>b;
    char operation;
    cout<<"Enter the operation: ";
    cin>>operation;
    switch(operation){
    case '+':
    cout<<a<<"+"<<b<<" = "<<a+b<<endl;
    break;
    case '*':
    cout<<a<<"*"<<b<<" = "<<a*b<<endl;
    break;
    case '/':
    if(b==0){
        cout<<"can't divide by zero";
     }
    else{
        cout<<a<<"/"<<b<<" = "<<a/b<<endl;
     }
    break;
    case '-':
    cout<<a<<"-"<<b<<" = "<<a-b<<endl;
    break;

    




 }
 return 0;


}


