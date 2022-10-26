#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i=0,x;
cout<<"enter the number";
cin>>n;
while(i<=n)
{
    x=n%10;
    n=n/10;
    i++;
}
cout<<i;
return 0;
}