#include<iostream>
#include<conio.h>
int sum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<sum(n);
return 0;
}
int sum(int n)
{
    
    if(n==1)
    {
    return 1;
    }
    return (n+sum(n-1));
}