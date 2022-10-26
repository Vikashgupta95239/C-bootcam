#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
cout<<"enter the 9 element of first matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
cout<<"enter the 9 element of second matrix";
for(i=0;i<3;i++)
{   cout<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
          cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        
        cin>>b[i][j];
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
          sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
        cout<<sum<<" ";
        sum=0;
    }
    cout<<"\n";
}
}