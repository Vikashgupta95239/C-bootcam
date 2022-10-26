#include<iostream>
#include<conio.h>
void binary(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
int r=0;
while(n)
{
r=n%2;
cout<<r;
n=n/2;
}
//binary(n);
return 0;
}
// void binary(int n)
// {
//     if(n==0)
//     return;
//     binary(n>>1);
//     cout<<(n&1);
// }
// 2nd method ;
// void binary(int n)
// {
//     if(n==0)
//     return;
//     binary(n/2);
//     cout<<(n%2);
// // }

