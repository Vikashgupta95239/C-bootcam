#include<stdio.h>
int main()
{
    int i,c=0,k=0,l=0;
    char str[1000],ch;
    printf("enter the string");
    fgets(str,1000,stdin);
    printf("enter the character to find frequency");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
        {
            c++;
        }
    }
    printf("frequency of %c =%d ",ch,c);
}