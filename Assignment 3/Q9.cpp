//check enetered character is alphabet , digit or special chaarcter
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter chaarcter : ";
    cin>>ch;
    int a = (int)ch;
    if(a>65 && a<90 || a>97 && a<122) cout<<"Alphabet";
    else if(a>48 && a<58) cout<<"Digit";
    else cout<<"Special character";
    return 0 ;
}