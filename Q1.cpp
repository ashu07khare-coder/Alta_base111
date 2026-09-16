#include <iostream>
using namespace std;
int main(){
    int N,years,months,days;
    cout<<"Enter no of days lived:";
    cin>>N;
    years=N/365;
    months=(N%365)/30;
    days=(N%365)%30;
    cout<<"Age of the person is "<< years<<"years "<< months<<"months "<<"and "<< days <<"days.";
    



}
