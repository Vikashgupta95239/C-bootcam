#include<iostream>
#include<conio.h>
void odd(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
odd(n);
return 0;
}
void odd(int n)
{
    if(n>=1)
    {
        cout<<" "<<(2*n-1);
    odd(n-1);
    }
    
}