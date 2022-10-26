#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i;
cout<<"enter the number ";
cin>>n;
for(i=n;i>=1;i--)
{    if(i%2==0)
    cout<<", "<<i;
}
return 0;
}