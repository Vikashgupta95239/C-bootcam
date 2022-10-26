#include<iostream>
#include<conio.h>
using namespace std;
int eoddnumber(int );
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<eoddnumber(n);
return 0;
}
int eoddnumber(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}