#include<stdio.h>
void sort(int *arr,int n);
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
     sort(a,n);
     for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
// void sort(int *arr,int n)
// {
// int i,j,temp;
// for(i=0;i<n-1;i++)
// {
//     for(j=i;j<n;j++)
//     {
//         if(arr[i]>arr[j])
//         {
//             temp=arr[i];
//             arr[i]=arr[j];    
//             arr[j]=temp;
//         }
//     }
// }
// }
void sort(int *arr,int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=*(arr+j);
            *(arr+j)=*(arr+j+1);    
            *(arr+j+1)=temp;
        }
    }
}
}

