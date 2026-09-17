#include <iostream>
using namespace std;
int main(){
    int day,month,year;
    cout<<"Enter the day:";
    cin>>day;
    cout<<"Enter the month:";
    cin>>month;
    cout<<"Enter the year:";
    cin>>year;
    cout<<day<<"/"<<month<<"/"<<year<<endl;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        if(month<=12){
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            if(day<=31){
                cout<<"Valid date";
                }
            else{
                cout<<"Invalid date"<<endl;
                cout<<"There cannot be more than 31 days in a month";
                }


       }
       if(month==4||month==6||month==9||month==11){
           if(day<=30){
            cout<<"Valid date";
            }
           else{
            cout<<"Invalid date"<<endl;
                cout<<"There cannot be more than 30 days in a month";
            }
       }
       if(month==2){
           if(day<=29){
            cout<<"Valid date";
           }
           else{
            cout<<"Invalid date"<<endl;
            cout<<"There cannot be more than 29 days in february for a leap year";
           }
       }
     }
    }   
    else{
        if(month<=12){
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            if(day<=31){
                cout<<"Valid date";
                }
            else{
                cout<<"Invalid date"<<endl;
                cout<<"There cannot be more than 31 days in a month";
                }


       }
       if(month==4||month==6||month==9||month==11){
           if(day<=30){
            cout<<"Valid date";
            }
           else{
            cout<<"Invalid date"<<endl;
                cout<<"There cannot be more than 30 days in a month";
            }
       }
       if(month==2){
           if(day<=28){
            cout<<"Valid date";
           }
           else{
            cout<<"Invalid date"<<endl;
            cout<<"There cannot be more than 28 days in february for a normal year";
           }
       }
     }

    }


}
