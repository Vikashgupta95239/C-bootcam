#include<iostream>
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
left=0;
right=2;
int count =0;
while(count<=8)
{
    for(i=left;i<=right;i++)
    {
        printf("%d ",a[top][i]);
        count++;
    }
   for(i=top+1;i<=bottom;i++)
    {
        printf("%d ",a[i][bottom]);
        count++;
    }
       for(i=top+1;i>=left;i--)
    {
        printf("%d ",a[right][i]);
        count++;
    }
    for(i=top;i<=bottom-1;i++)
    {
        printf("%d ",a[right-1][i]);
        count++;
    }
    // printf("%d",count);
    // if(count==9)
    // {
    //     break;
    // }

}



}

