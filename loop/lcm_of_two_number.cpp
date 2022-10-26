#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b,i;
cout<<"enter the two number";
cin>>a>>b;
for(i=2;i<=a*b;i++)
{
    if(i%a==0&&i%b==0)
    {
    cout<<"lcm="<<i;
    break;
    }
}
return 0;
}