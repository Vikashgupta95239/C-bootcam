#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][20];
    int i,j;
    printf("enter the 10 mail to check @ or not ");
    for(i=0;i<10;i++)
    {
        gets(a[i]);
    }
       for(i=0;i<10;i++)
    {
        if((strchr(a[i],'@'))!=0)
        {
            printf("%s\n\t",a[i]);
        }
    }

}