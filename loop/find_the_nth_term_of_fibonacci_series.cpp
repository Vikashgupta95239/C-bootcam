#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,a=-1,b=1,sum=0,i;
cout<<"enter the number";
cin>>n;
for(i=0;i<=n;i++)
{
    sum=a+b;
    a=b;
    b=sum;
}
cout<<"nth term of fibonacci series="<<sum;

return 0;
}