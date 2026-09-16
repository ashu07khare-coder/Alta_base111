#include <iostream>
using namespace std;
int main(){
    // Making a boolean variable representing a system flag
    bool isonline=true;
    cout<<"Initial state: "<<boolalpha<<isonline<<endl;
    // toggling the variable 
    isonline=!isonline;
    cout<<"toggled: "<<boolalpha<<isonline;
}
