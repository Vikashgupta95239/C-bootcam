#include<iostream>
#include<conio.h>
using namespace std;
int LCM(int,int);
int main()
{
    int a,b;
    cout<<"enter the two numbwer";
    cin>>a>>b;
    cout<<LCM(a,b);
}
int LCM(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        return i;
    }  
}