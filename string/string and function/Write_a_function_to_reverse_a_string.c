#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];
    printf("enter the  string");
    fgets(str,100,stdin);
    printf("reverse of string is=%s",strrev(str));
}