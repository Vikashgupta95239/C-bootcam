#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int i,a,b;
cout<<"enter the two number ";
cin>>a>>b;
for(i=a*b;i>=1;i--)
{
    if(a%i==0&&b%i==0)
    {
        cout<<"hcf is ="<<i;
        break;
    }
}
return 0;
}