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
// for(i=0;i<3;i++)
// {
//     for(j=0;j<3;j++)
//     {
//         if(j>=i)
//         {
//             cout<<a[i][j]<<" ";
//         }
//     }
//     cout<<"\n";
// }


//2nd way
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(j>i)
        {
        a[i][j]=0;
        }
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {

        cout<<a[i][j];
        
    }
    cout<<"\n";
}
}