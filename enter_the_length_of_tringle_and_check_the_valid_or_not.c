#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three side of length");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
    printf("valid traingle");
    else if(a+c>b)
    printf("valid traingle");
    else if(b+c>a)
    printf("valid traingle");
    else
    printf("not valid");

}