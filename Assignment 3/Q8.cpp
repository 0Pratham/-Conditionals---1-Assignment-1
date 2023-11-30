//points lies on straight line or not
#include<iostream>
using namespace std;
int main(){
    int x1 , x2 , x3 , y1 , y2 , y3;
    cout<<"Enter x1,y1 : ";
    cin>>x1>>y1;
    cout<<"Enter x2,y2 : ";
    cin>>x2>>y2;
    cout<<"Enter x3,y3 : ";
    cin>>x3>>y3;
    float a , b;
    a = (y2-y1)/(x2-x1);
    b = (y3-y2)/(x3-x2);
    if(a==b) cout<<"Entered points lies on straight line";
    else cout<<"Entered points not lies on straight line";
    return 0 ;
}