#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int x,y,z,D;
cout<<"enter the value of x y z";
cin>>x>>y>>z;
D=(y*y)-4*x*z;
if(D>0)
cout<<"real root";
else if(D<0)
cout<<"imaginary root";
else if(D==0)
cout<<"equal root";
return 0;
}