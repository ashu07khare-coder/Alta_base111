#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter month no: ";
    cin>>n;
    switch(n){
    case 12:
    case 1:
    case 2:
    cout<<"Winter";
    break;
    break;
    case 3:
    case 4:
    case 5:
    cout<<"Spring";
    break;
    case 6:
    case 7:
    case 8:
    cout<<"Summer";
    break;
    case 9:
    case 10:
    case 11:
    cout<<"Autumn/winter";
    break;
    

 }
}
