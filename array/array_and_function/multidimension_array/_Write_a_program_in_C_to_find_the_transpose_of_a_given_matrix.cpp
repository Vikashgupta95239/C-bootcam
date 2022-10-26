#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j;
cout<<"enter the 9 element of first matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {

        //b[i][j]=a[i][j];
        cout<<a[j][i]<<" ";
    }
    cout<<"\n";
}
}