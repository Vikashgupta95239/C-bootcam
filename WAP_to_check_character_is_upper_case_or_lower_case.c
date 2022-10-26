#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character to check upper case or not");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("upper case character");
    else if(ch>='a'&&ch<='b')
    printf("lower case");
    else
    printf("specail character");
}