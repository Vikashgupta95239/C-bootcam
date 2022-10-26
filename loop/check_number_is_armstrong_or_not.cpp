#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sum=0,x,c;
cout<<"enter the number to check armstrong or not";
cin>>n;
c=n;
for(i=0;n;i++)
{
x=n%10;
sum=sum+x*x*x;
n=n/10;
}
if(c==sum)
cout<<"armstrong number";
else
cout<<"not armstrong number";
return 0;
}