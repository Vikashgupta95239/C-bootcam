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
    int i,fec=1;
    for(i=1;i<=n;i++)
    {
        fec=fec*i;

    }
    return fec;
}