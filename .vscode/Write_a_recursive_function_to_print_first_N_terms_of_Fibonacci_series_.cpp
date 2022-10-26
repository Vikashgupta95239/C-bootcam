#include<iostream>
#include<conio.h>
using namespace std;
int fibonacci(int);
int main(){
int n;
cout<<"enter the number";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<" "<<fibonacci(i);
}
return 0;
}
int fibonacci(int n)
{
    if(n==0||n==1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}