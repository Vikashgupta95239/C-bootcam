#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int i,j,c=0,a,b;
cout<<"enter two number to print between prime number";
cin>>a>>b;
for(i=a;i<=b;i++)
{   
    //c=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
         //c++;
         break;
    }
    if(j==i)
    cout<<"  "<<i;
}
return 0;
}