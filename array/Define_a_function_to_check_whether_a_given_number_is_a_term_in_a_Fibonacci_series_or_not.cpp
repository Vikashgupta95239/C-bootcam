#include<iostream>
#include<conio.h>
void fibonacci_term_check(int);
using namespace std;
int main(){
int n;
cout<<"enter the number for check term of fibonacci series or not";
cin>>n;
fibonacci_term_check(n);
return 0;
}
void fibonacci_term_check(int n)
{
    int a=-1,b=1,sum=0,count=0;
    for(int i=0;i<=n;i++)
    {
        sum=a+b;
        if(sum==n)
        {  count++;
            cout<<"yes the number is term of fibonacci series"<<endl;
        }
        a=b;
        b=sum;
    }
    if(count==0)
    {
        cout<<"the number is not term of fibonacci series";
    }
}