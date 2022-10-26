#include<iostream>
#include<conio.h>
void fibonacci(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
fibonacci(n);
return 0;
}
void fibonacci(int n)
{
    int a=1,b=-1,i,sum=0;
    for(i=0;i<=n;i++)
    {
        sum=a+b;
        cout<<sum;
        b=a;
        a=sum;

    }
}