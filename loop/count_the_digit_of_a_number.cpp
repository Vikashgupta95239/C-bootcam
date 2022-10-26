#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,c=0,x;
cout<<"enter the number";
cin>>n;
for(i=0;n;i++)
{
x=n%10;
n=n/10;
c++;
}
cout<<"total digit="<<c;
return 0;
}