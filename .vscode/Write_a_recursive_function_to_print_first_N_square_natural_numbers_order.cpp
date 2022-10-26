#include<iostream>
#include<conio.h>
void square(int n);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
square(n);
return 0;
}
void square(int n)
{
    if(n>1)
    square(n-1);
    cout<<" "<<n*n;
}
