#include<stdio.h>
int sum(int *arr,int n);
int main()
{
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the %d element ",n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("%d  ",sum(a,n));
}
int sum(int *arr,int n)
{
    int i,total_sum=0;
    for(i=0;i<n;i++)
    {
        total_sum=total_sum+arr[i];
    }
    return total_sum;
}