#include<iostream>
#include<conio.h>
int digitsum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<digitsum(n);
return 0;
}
int digitsum(int n)
{  int c=0;
    if(n==0)
      return 0;
      c++;
    n%10+digitsum(n/10);
     
     return c;
}