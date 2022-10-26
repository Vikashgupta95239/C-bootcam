#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j,sumc=0,sumr=0;
cout<<"enter the 9 element of matrix";
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
         sumr=sumr+a[i][j];
         sumc=sumc+a[j][i];
    }
        cout<<"sum of " <<i<<" rows is"<<sumr<<"\n";
    cout<<"sum of " <<i<<" column is"<<sumc<<"\n";
    sumc=0;
    sumr=0;
}
}