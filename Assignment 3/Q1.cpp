#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    if(a>b) cout<<"First number "<<a<<" is largest";
    else{
        if(b>a) cout<<"Second number "<<b<<" is largest";
        else cout<<a<<" "<<b<<" are equal";
    }
    return 0 ;
}