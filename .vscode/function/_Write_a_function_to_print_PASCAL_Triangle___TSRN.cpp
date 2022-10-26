#include<iostream>
#include<conio.h>
int fect(int);
int combination(int ,int);
void pascal(int);

using namespace std;
int main(){
int n,r;
cout<<"enter the number of item";
cin>>n;
pascal(n);
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
int combination(int n,int r)
{
 int c=(fect(n)/(fect(r)*fect(n-r)));
return c;
}
 void pascal(int n)
 {
    int i,j;
    for(i=0;i<=n;i++)
 {
    for(j=0;j<=i;j++)
    {
        cout<<" "<<combination(i,j);
    }
    cout<<"\n";
 }
 }