#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j,k;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
int top,bottom,left,right;
top=0;
bottom=2;
left=1;
right=2;
int count=0;
while(count<=8)
{
    for(i=left;i>=top;i--)
    {
        printf("%d ",a[left][i]);
        count++;
      
    }
        for(i=top;i<=right;i++)
    {
        printf("%d ",a[right][i]);
        count++;
    }

   for(i=left;i>=0;i--)
    {
        printf("%d ",a[i][bottom]);
        count++;
    }
       for(i=left;i>=0;i--)
    {
        printf("%d ",a[top][i]);
        count++;
    }
    
    // if(count==8)
    // {
    //     break;
    // }

}
}

