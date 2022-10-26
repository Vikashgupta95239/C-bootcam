#include<stdio.h>
#include<stdio.h>
void reverse(int *arr,int n);
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
    reverse(a,n);
}
void reverse(int *arr,int n)
{   
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
