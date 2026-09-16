#include <iostream>
using namespace std;
int main(){
    float original,discount_percentage,sales_tax_percentage,final_price,a,b;
    cout<<"Enter original price of the item: ";
    cin>>original;
    cout<<"Enter discount percentage: ";
    cin>>discount_percentage;
    cout<<"Enter sales tax percentage: ";
    cin>>sales_tax_percentage;
    a=(original-discount_percentage*original/100);
    cout<<"Discount price: "<<a<<endl;
    b=a+(sales_tax_percentage*a/100);
    cout<<"Final price: "<<b;
}
