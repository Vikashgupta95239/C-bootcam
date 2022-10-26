#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b,c;
cout<<"enter three number check greater";
cin>>a>>b>>c;
if(a>b&&a>c)
cout<<"greater"<<a;
else if(b>c)
cout<<"greater"<<b;
else
cout<<"greater"<<c;
return 0;
}