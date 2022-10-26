#include<iostream>
#include<conio.h>
void natural(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
natural(n);
return 0;
}
void natural(int n)
{
    if(n>0)
    {
    natural(n-1);
    cout<<"  "<<n;
    }
    
}