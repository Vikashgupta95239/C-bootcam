#include<iostream>
#include<conio.h>
int fect(int);
int combination(int ,int);
using namespace std;
int main(){
int n,r;
cout<<"enter the number of item";
cin>>n;
cout<<"enter the set of selection of item";
cin>>r;
cout<<combination(n,r);
return 0;
}
int combination(int n,int r)
{
 int c=(fect(n)/(fect(r)*fect(n-r)));
return c;
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
