#include<iostream>
#include<conio.h>
int fect(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<fect(n);
return 0;
}
int fect(int n)
{
    
    if(n==0||n==1)
    {
    return 1;
    }
    return (n*fect(n-1));
}