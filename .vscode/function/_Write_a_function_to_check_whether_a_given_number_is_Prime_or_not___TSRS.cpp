#include<iostream>
#include<conio.h>
using namespace std;
int prime(int);
int main(){
int n,m=1;
cout<<"enter the number";
cin>>n;
m=prime(n);
if(m==0)
cout<<"prime number";
if(m>=1)
cout<<"not prime";
}
int prime(int n)
{
    int i,c=0;
    for(i=2;i<=int(n/2);i++)
    {  
        if(n%i==0)
        {
        c++; 
        break; 
        }
    }
    // cout<<c;
    // if(c==1)
    // cout<<"not prime";
      return c;
}
