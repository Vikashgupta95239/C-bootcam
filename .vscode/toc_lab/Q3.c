//3 desing a program for accepting decimal number divisible by 2;
#include<stdio.h>
int main()
{
    int n;
    printf("enter the decimal number ");
    scanf("%d",&n);
    if(n&1)
    printf("not divisible by 2");
    else
    printf("divisible by 2");
}