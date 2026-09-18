#include <iostream>
using namespace std;
int main(){
    int sum=0,n;
    while(true){
        cout<<"Enter a number:";
        cin>>n;
        if(n>0){
            sum+=n;
        }
        else{
            break;
        }

    }
    cout<<"Sum Before Break ="<<sum;
}
