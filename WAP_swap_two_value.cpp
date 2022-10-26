#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b,t;
cout<<"enter the two number";
cin>>a>>b;
t=a;
a=b;
b=t;
cout<<"a ="<<a<<" b ="<<b;
return 0;
}