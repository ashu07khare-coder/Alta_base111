#include <iostream>
using namespace std;
int main(){
    float weight,height,bmi;
    cout<<"Enter weight in kg: ";
    cin>>weight;
    cout<<"Enter height in m: ";
    cin>>height;
    bmi=weight/((height)*(height));
    if(bmi<18.5){
        cout<<"Underweight";
    }
    if(bmi>=18.5 && bmi<25){
        cout<<"Normal Weight";
    }
    if(bmi>=25 && bmi<=30){
        cout<<"Overweight";
    }
    if(bmi>30){
        cout<<"Obese";
    }


    
}
