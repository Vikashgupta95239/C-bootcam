#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {  
            if(j>=4-i&&j<=6+i)
{
            else if(j>=2+i&&j<=18-i)
            printf("*");
}
            else
            printf(" ");
        }
        printf("\n");
    }
}