#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sum=0;
cout<<"enter the nummber";
cin>>n;
for(i=1;i<=n;i++)
{
    if(i%2)
    sum=sum+i;
}
cout<<sum;
return 0;
}