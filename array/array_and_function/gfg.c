#include<stdio.h>

// int main()
// {
//     int a[6],i;

//     for(i=1;i<=5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
// cyclic rotation gfg
//     int last=a[4];

//     for(i=4;i>0;i--)
//     {
//       a[i]=a[i-1];

//     }
//     a[0]=last;
//wave rotation in gfg
    // for(i=0;i<5;i++)
    // {
    //   int temp=a[i];
    //       a[i]=a[i+1];
    //       a[i+1]=temp;
    //       i++;
          
    // }
    //reverse arry in group
   int n=3;
    static int j=1;
    int arr[5];
    for(i=3;i>0;i--)
    {
      arr[j]=a[i];
       j++;
      
    }
    
    // printf("%d",j);
    for(i=5;i>3;i--)
    {
        arr[j]=a[i];
        j++;
    }

// for(i=1;i<=5;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }
void rotateArr(int arr[],int,int);
int main()
{
    int arr[]={1,2,3,4,5};
    rotateArr(arr,2,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

}
void rotateArr(int arr[], int d, int n)
{
  int brr[n],i,j=0;
  for(i=d;i<n;i++)
  {
      brr[j]=arr[i];
      j++;
  }
 +
  
  for(i=0;i<d;i++)
  {
      brr[j]=arr[i];
      j++;
  }
  j=0;
  for(int i=0;i<n;i++)
  {  
      arr[i]=brr[j];
      j++;
  }
}