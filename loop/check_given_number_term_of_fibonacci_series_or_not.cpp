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
    if(sum==n)
    {
        cout<<"number is term of fibonacci series";
    }
    a=b;
    b=sum;
}
if(i==n+2)
cout<<"number is not term of fibonacci series";

return 0;
}