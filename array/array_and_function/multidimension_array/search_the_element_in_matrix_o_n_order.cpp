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
    }
}
int row=0,col=2,choice;
cout<<"enter the number do you want to search";
cin>>choice;
int m=0;
while(m<=8)
{   
if(a[row][col]==choice)
{
    cout<<"position of element"<<row<<col;
    break;
}
else if(a[row][col]>choice)
    col--;
    else
    row++;
m++;
}
if(m==9)
{
    cout<<"element not found";
}
}
