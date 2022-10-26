#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20],b[5][20],temp[20];
    int i,j;
    printf("enter the 5 string");
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    printf("enter the strind do you want to search");
    gets(temp);
    for(i=0;i<5;i++)
    {
        if(strcmp(temp,a[i])==0)
        {
            printf("sucessfully found the string");
        }
    }

}