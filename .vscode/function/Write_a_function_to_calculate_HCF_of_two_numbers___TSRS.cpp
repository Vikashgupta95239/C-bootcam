#include<iostream>
#include<conio.h>
using namespace std;
int HCF(int,int);
int main()
{
    int a,b;
    cout<<"enter the two numbwer";
    cin>>a>>b;
    cout<<HCF(a,b);
}
int HCF(int x,int y)
{
    int i;
    for(i=x*y;i>=1;i--)
    {
        if((x%i==0)&&(y%i==0))
        return i;
    }  
}