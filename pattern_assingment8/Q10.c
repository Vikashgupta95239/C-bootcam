#include<stdio.h>
int main()
{
    int i,j,m,k;
    for(i=1;i<=5;i++)
    {  m=0;
       k=0;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
            if(k<=3)
            {
                k++;
                m++;
            }
            else
            {
                m--;
            }
            printf("%d",m);
            }
            else
            {
            printf(" ");
            m++;
            k++;
            }
            
            
        }
        printf("\n");
    }
}