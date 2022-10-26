#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,j;
    char username[3][2][20]={{"vikash","kumar"},{"raju","1234"},{"kismat","9999"}};
    char verification[2][20];
    printf("enter the user name and password");
    for(i=0;i<2;i++)
    {
    gets(verification[i]);
    }
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        if(strcmp(verification[j],username[j])==0)
        {
    printf("varified name");
        }
    }
}
if(i<2)
{
    printf("try again");
}
}
