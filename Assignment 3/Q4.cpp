// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.

#include<iostream>
using namespace std;
int main(){
    int l;
    int b;
    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter breath : ";
    cin>>b;
    int area = l * b;
    int perimeter = 2 * (l + b);
    if(area > perimeter) cout<<"Area is greater than perimeter";
    else if(perimeter > area) cout<<"Perimeter is greater than Area";
    else cout<<"Area and Perimeter are equal";
    return 0;
}