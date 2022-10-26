#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sum=0,x,c,j;
for(j=1;j<=100;j++)
{
    sum=0;
    c=j;
for(i=0;i<=j;i++)
{
x=j%10;
sum=sum+x*x*x;
j=j/10;
}
if(c==sum)
cout<<c;
}
return 0;
}