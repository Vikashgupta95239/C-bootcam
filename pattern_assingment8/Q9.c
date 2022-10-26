#include<stdio.h>
int main()
{
    int i,j,m,k;
    for(i=1;i<=4;i++)
    {  m=0;
       k=0;
        for(j=1;j<=7;j++)
        {    
            if(j>=i&&j<=8-i)
            {

                if(k<5-i)
                { k++;
                  m++;  
                }
                else
            {
                m--;
            }
            printf("%d",m);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}