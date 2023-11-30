#include<iostream>
using namespace std;
int main(){
   int r;
   cout<<"Enter r : ";
   cin>>r;
   float pi = 3.1415;
   float area = pi * r * r;
   float cir = 2 * pi * r;
   if(area > cir) cout<<"Area is greater than circumference";
   else{
    if(cir > area) cout<<"Circumference is greater than area";
    else cout<<"circumference and area is equal";
   }
    return 0 ;
}