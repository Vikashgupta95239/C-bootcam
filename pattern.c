#include<stdio.h>
int main()
{
    int n=1,i,j;
    for(i=1;i<=5;i++)
     {     if(i%2==0)
            n=0;
           else
           n=1;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("%d",n);
            else
            printf(" ");
        }
        printf("\n");
        
    }

}
