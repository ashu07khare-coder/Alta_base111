#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count+=1;
        }

    }
    if(count==2){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is a composite numbe";
    }

}
