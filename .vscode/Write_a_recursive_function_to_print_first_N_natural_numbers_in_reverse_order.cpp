#include<iostream>
#include<conio.h>
void naturalrev(int n);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
naturalrev(n);
return 0;
}
void naturalrev(int n)
{
    if(n>0)
    cout<<" "<<n;
    naturalrev(n-1);
}
