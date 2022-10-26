#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
int c=0,k=0,r=0;
for(i=0;i<3;i++)
{   c=0;
    for(j=0;j<3;j++)
    {
        if(a[i][j]==1)
        {
            c++;
        }
    }
    if(c>k)
    {
    k=c;
    r=i;
    }
}
if(k==0)
{
    cout<<"not 1 in matrix";
}
else
{
cout<<" "<<k<<" "<<r;
}
}