#include <iostream>
using namespace std;
int main(){
    int withdrawl_amount,account_balance;
    cout<<"Enter account balance: ";
    cin>>account_balance;
    cout<<"Enter withdrawl amount(Transaction fee - 2$): ";
    cin>>withdrawl_amount;
    if(withdrawl_amount>0){
        if(withdrawl_amount%100==0){
            if(account_balance>=withdrawl_amount+2){
                account_balance=account_balance-(withdrawl_amount+2);
                cout<<"Transaction valid: True"<<endl;
                cout<<"Remaining balance: "<<account_balance; 
                

            }
            else{
                cout<<"Transaction Invalid: False"<<endl;
            }
            
        }
        else{
            cout<<"Transaction Invalid: False"<<endl;}
    }
    else{
        cout<<"Transaction Invalid: False"<<endl;
    }


}
