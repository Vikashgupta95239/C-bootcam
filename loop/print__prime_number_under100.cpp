#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int i,j,c=0;
for(i=2;i<=100;i++)
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