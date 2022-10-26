#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int i,j,c=0,a;
cout<<"enter the number";
cin>>a;
for(i=a+1;i<=a*a;i++)
{   
    //c=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
         //c++;
         break;
    }
    if(j==i)
    {
    cout<<"  "<<i;
    break;
    }
}
return 0;
}