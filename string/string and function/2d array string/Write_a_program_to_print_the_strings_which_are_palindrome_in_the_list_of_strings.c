#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20],b[5][20];
    int i,j;
    printf("enter the 5 string to print the pallindrom");
    for(i=0;i<5;i++)
    {
        gets(a[i]);
        strcpy(b[i],a[i]);
    }
    for(i=0;i<5;i++)
    {
    strrev(b[i]);   
    }
    for(i=0;i<5;i++)
    {
    for(j=0;a[i][j];j++)
        {
         if(a[i][j]!=b[i][j])
         {
            break;
         }
         else
         {
            printf("%c  ",b[i]);
         }
        }
        printf("\n");

    }
}