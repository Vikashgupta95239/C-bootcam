#include<stdio.h>
int main()
{
    int i,c=0,k=0;
    char str[1000];
    printf("enter the string ");
    fgets(str,1000,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]==' '&&str[0]!=' '&&str[i+1]>='a'&&str[i+1]>='A'&&str[i+1]<='z'&&str[i+1]>='Z')
        {
           c++;
        }
    }
    printf("total word is =%d",c+1);
}