#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    if(a%3==0){
        if (a%5==0){
            cout<<"Divisible by both 3 and 5";
        }
        else{
            cout<<"Divisible by 3 only";
        }
    }
    else if(a%5==0){
        cout<<"Divisible by 5 only";
    }
    else{
        cout<<"divisible by none";
    }



}
