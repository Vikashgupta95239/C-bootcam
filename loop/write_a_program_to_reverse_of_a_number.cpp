#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,x,r=0;
cout<<"enter the number for reverse";
cin>>n;
for(i=0;n;i++)
{
 x=n%10;
r=r*10+x;
n=n/10;
}
cout<<r;
return 0;
}