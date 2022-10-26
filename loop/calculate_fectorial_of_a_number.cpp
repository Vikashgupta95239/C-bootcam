#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,fect=1,i;
cout<<"enter the number";
cin>>n;
for(i=1;i<=n;i++)
{
    fect=fect*i;
}
cout<<"fectorial="<<fect;
return 0;
}