#include<iostream>
#include<conio.h>
void square(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
square(n);
return 0;
}
void square(int n )
{
  cout<<"square="<<n*n;
   
}