#include <iostream>
using namespace std;
int main(){
    int n1=0,n2=1,next_term;
    int count;
    cout<<"Enter the number: ";
    cin>>count;
    for(int i=0; i<=count; i++){
        cout<<n1<<" ";
        next_term=n1+n2;
        n1=n2;
        n2=next_term;
    }



}
