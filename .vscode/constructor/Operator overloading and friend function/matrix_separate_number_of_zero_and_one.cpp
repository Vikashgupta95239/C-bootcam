#include<iostream>
using namespace std;
int main()
{
int a[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{  
    for(j=0;j<3;j++)
    {
    
        cin>>a[i][j];
          if(a[i][j]==0||a[i][j]==1)
    {
    }
    else
    {
        printf("you have enter wrong input");
        exit(0);
    }
    }
  
}
// while(n>=0)
// {
//     int row=0;
//     int col=0;
//     if(a[row][col]==0&&a[row][col+1]==1)
//     { 
//         int temp;
//         temp=a[row][col+1];
//         a[row][col+1]=a[row][col];
//         a[row][col]=temp;
//         col++;
//     }
//     n--;
// }
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        if(a[i][j]==0 && a[i][j+1]==1)
    { 
        int temp;
        temp=a[i][j+1];
        a[i][j+1]=a[i][j];
        a[i][j]=temp;
    }
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
   
}
}
