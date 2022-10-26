#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
int c=0,k=0; 
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(j==2-i)
        {
            c=a[i][j];
        }
    }
    if(c>k)
    {
        k=c;
    }

}
cout<<"maximum number of left digonal\n"<<k;
}