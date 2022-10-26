#include<iostream>
#include<conio.h>
int evan(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<evan(n);
return 0;
}
int evan(int n)
{
    return n%2==0;
}