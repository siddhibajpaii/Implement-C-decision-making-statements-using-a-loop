#include <iostream>
using namespace std;

int main() {
    string password = "007";
    int a=0;
    while(true){
        cout<< "enter the password : "<<endl;
        string p;
        cin>>p;
        if (p==password){
            cout<<"correct!!  ";
            break;
        }
        else{
            cout<<"try again"<<endl;
        }
    }
return 0;
}

//output: 
enter the password : 
navya
try again
enter the password : 
1602
try again
enter the password : 
019
correct!! 
    //
