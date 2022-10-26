#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fect(int n);
void fect(int n)
{
    int i,fecto=1;
    for(i=n;i>=1;i--)
    {
        fecto=fecto*i;
    }
    printf("fectorial of a number is ==>%d",fecto);
}

int main()
{  int i,j;
    char listname[5][20],name[20];
    printf("enter the 5 user name");
    for(i=0;i<5;i++)
{
    gets(listname[i]);
}
printf("enter the user name for calcualte the fectoril");
{
    gets(name);
}
int count=0;
for(i=0;i<5;i++)
{
int n;
    
        if((strcmp(listname[i],name))==0)
        {
            printf("congratulation you are varified......\n");

            printf("enter the number do you want to calcuLate fectorial");
            scanf("%d",&n);
            fect(n);
            count++;
        }  
}
if(count==0)
{
    printf("invalid user name try again");
}
}