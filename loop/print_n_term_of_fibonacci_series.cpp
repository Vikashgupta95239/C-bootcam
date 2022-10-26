#include<iostream>
#include<conio.h>
using namespace std;
int main(){
long int n,a=-1,b=1,sum=0,i;
cout<<"enter the number";
cin>>n;
for(i=0;i<n;i++)
{
    sum=a+b;
    cout<<"\n"<<sum;
    a=b;
    b=sum;
}
return 0;
}