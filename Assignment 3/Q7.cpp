#include<iostream>
using namespace std;
int main(){
    int x , y;
    cout<<"Enter coordinates : ";
    cin>>x>>y;
    if(x>0 && y>0) cout<<"Entered point lies on coordinate plane";
    else if(x==0 && y>0) cout<<"Entered point lies on Y-axis";
    else if(y==0 && x>0) cout<<"Entered point lies on x-axis";
    else cout<<"Entered point lies on origin";
    return 0 ;
}