#include<iostream>
#include<conio.h>
void digitcheck(int,int);
using namespace std;
int main(){
int n,c;
cout<<"enter the number";
cin>>n;
cout<<"enter the digit do you want check";
cin>>c;
digitcheck(n,c);
return 0;
}
void digitcheck(int n,int c)
{   int m;
    for(int i=0;i<=n;i++)
    {
      m=n%10;
      n=n/10;
      if(m==c)
      {
      printf("digit is present"); 
      break;
      }  
    }
}