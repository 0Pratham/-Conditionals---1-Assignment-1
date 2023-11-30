// Leap year or not
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter year : ";
    cin>>n;
    int a = n;
    int num = 0;
    while(a>0){
        int ld = a % 10;
        if(ld == 0) num++;
        else break;
        a /= 10;
    }
    if(num >= 2){
        if(n % 400 == 0) cout<<n<<" is leap year";
        else cout<<n<<" is not leap year"; 
    }
    else{
        if(n % 4 == 0) cout<<n<<" is leap year";
        else cout<<n<<" is not leap year";
    }
    return 0 ;
}