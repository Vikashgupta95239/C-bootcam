// 5 desing a program for reading a machine which count number one's and 0's in a given string
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("what are the binary number do you to enter");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the %d binary number",n);
    for (int j = 0; j < n; j++)
  {
    scanf("%d", &a[j]);
    if (a[j] != 0 || a[j] != 1)
    {
    }
    else
    {
      printf("you have entered wrong input");
      exit(0);
    }
  }
    int one=0,zero=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        if(a[i]==0)
        {
        zero++;
        }
    }
    printf("Number of zero is  %d\nNumber of one is %d ",zero,one);
}
  
