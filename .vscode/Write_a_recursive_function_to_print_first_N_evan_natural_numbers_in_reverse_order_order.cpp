#include<iostream>
#include<conio.h>
void evanrev(int n);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
evanrev(n);
return 0;
}
void evanrev(int n)
{
    if(n>0)
    {
    cout<<" "<<2*n;
    evanrev(n-1);
    }
    
}
