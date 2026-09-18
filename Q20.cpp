#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%15==0){
        cout<<"fizzBuzz"<<endl;
           continue;}
        else if(i%3==0){
            cout<<"fizz"<<endl;
            continue;
        }
        else if(i%5==0){
            cout<<"Buzz"<<endl;
            continue;
        }
        cout<<i<<endl;
        
        }
   
    


    
   }
