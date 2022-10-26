#include<iostream>
#include<conio.h>
void octal(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
octal(n);
return 0;
}
void octal(int n)
{
    if(n==0)
    return;
    octal(n/8);
    cout<<(n%8);
}