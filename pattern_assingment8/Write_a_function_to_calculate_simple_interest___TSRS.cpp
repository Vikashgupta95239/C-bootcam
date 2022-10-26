#include<iostream>
#include<conio.h>
float simpleinterest(int,int,int);
using namespace std;
int main(){
int p,r,t;
cout<<"enter the ammount rate of interest and time";
cin>>r>>p>>t;
cout<<"simple interest="<<simpleinterest(p,t,r);
return 0;
}
float simpleinterest(int r,int p,int t)
{
    return(t*r*p)/100;
}