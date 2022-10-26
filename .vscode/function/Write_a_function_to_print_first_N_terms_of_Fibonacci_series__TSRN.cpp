#include<iostream>
#include<conio.h>
void fibonacci(int);
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
    int i,sum,a=1,b=-1;
    for(i=1;i<=n;i++)
    {   
       sum=a+b;
       cout<<"  "<<sum;
      b=a;
      a=sum;
       
    }
  
}