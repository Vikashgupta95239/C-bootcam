#include<stdio.h>
int main()
{    int n;
   printf("enter the number");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {  
            if(i==0||j==0)
            printf("%d",n);
           else
            printf(" ");
        }
        printf("\n");
    }
}