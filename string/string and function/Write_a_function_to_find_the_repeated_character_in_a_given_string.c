#include<stdio.h>
int main()
{
    int i,c=0,k=0,l=0,j;
    char str[1000],ch;
    printf("enter the string");
    fgets(str,1000,stdin);
    for(i=0;str[i];i++)
    {   c=0;
    if(str[i]!=1)
    {
        for(j=i;str[j];j++)
        {
        if(str[i]==str[j+1]&&str[i]!=' ')
        {
            c++;
            str[j+1]=1;
        }
        }
        if(c>0)
        {
            printf(" repeated character is %c  %d times \n",str[i],c);
        }
    }
    }

}