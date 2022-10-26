#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
}

int swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;

}