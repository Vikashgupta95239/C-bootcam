#include<stdio.h>
int maximum(int *a,int *b);
int main()
{
    int a,b;
    printf("enter the two number to find the maximum\n");
    scanf("%d%d",&a,&b);
    printf("%d",maximum(&a,&b));

}
int maximum(int *a,int *b)
{ 
    if(*a>*b)
    return *a;
    else
    return *b;
}
 