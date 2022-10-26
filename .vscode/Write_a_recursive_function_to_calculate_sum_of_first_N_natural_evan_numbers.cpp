#include<iostream>
#include<conio.h>
int Esum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<Esum(n);
return 0;
}
int Esum(int n)
{
    
    if(n==1)
    {
    return 2;
    }
    return (2*n+Esum(n-1));
}