//triangle sides given find type of triangle 
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
    if( a==b && b==c) cout<<"Equilateral triangle";
    else if(a==b && b!=c || a==c && b!=c || b==c && a!=b ) cout<<"Isosceles triangle";
    else cout<<"Scalen triangle";
    return 0 ;
}