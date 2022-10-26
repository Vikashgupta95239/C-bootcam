#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,c=0;
cout<<"enter the number";
cin>>n;
for(i=2;i<n;i++)
{
    if(n%i==0)
   c++;
    break;
}
if(c==0)
cout<<"prime number";
else
cout<<"not prime";
return 0;
}