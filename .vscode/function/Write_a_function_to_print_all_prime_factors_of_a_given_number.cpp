#include<iostream>
#include<conio.h>
void primefector(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
primefector(n);
return 0;
}
void primefector(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
          while(n%i==0)
          {
            cout<<"  "<<i;
            n=n/i;
          }
        
    }
}