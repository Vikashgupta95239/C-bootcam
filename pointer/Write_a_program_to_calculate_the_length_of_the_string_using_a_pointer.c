#include<stdio.h>
void length(char *ptr,int n);
int main()
{
    char str[100];
    printf("enter the string ");
    gets(str);
    length(str,100);
}
void length(char *ptr,int n)
{
    int i;
    for(i=0;ptr[i];i++);
    printf("%d",i);
}
