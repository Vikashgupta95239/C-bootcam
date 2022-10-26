#include<stdio.h>
#include<stdlib.h>
int swap(char **,char **);
int main()
{
    char *str1[20],*str2[20];
    printf("enter the first string\n");
    gets(str1);
    printf("enter the second string");
    gets(str2);
    swap(&str1,&str2);
    printf(" the first string %s\n",str1);
    printf(" the second string %s",str2);
    return 0;
}
int swap(char **str1,char **str2)
{
    char *temp;
    temp=*str1;
    *str1=*str2;
    *str2=temp;
    return 0;
}