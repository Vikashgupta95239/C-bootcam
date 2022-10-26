#include<iostream>
#include<conio.h>
void evan(int n);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
evan(n);
return 0;
}
void evan(int n)
{
    if(n>1)
    evan(n-1);
    cout<<" "<<2*n;
}
