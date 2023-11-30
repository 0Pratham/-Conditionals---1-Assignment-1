// marks of a , b , c are givem find out least marks
#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    if(a<b){
        if(a<c) cout<<"a is the least marks";
        else cout<<"c is the least marks";
    }
    else{
        if(b<c) cout<<"b is the least marks";
        else cout<<"c is the least marks";
    }
    return 0 ;
}