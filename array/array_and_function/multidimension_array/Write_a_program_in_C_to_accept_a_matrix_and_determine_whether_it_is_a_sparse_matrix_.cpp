1#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,m,r,i,j;
cout<<"enter the number of rows";
cin>>n;
cout<<"enter the number of column";
cin>>m;
int a[n][m];
r=n*m;
cout<<"enter the "<<r<<" element of matrix";
for(i=0;i<n;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<m;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
int c=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a[i][j]==0)
        {
            c++;
        }
    }
}
cout<<"number of zero is"<<c<<"\n";
    if(c>(r/2))
    {
     cout<<"sparse matrix";

    }
    else
    {
        cout<<"not sparse matrix";
    }
}