
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, count = 0;
    printf("what are the binary number do you to enter");
    scanf("%d", &n);
    int a[n], i;
    printf("enter the %d binary number\n", n);
    for (int j = 0; j < n; j++)
   {
         scanf("%d", &a[j]);
        if(a[j]!=0||a[j]!=1){}
        else
        {
            printf("you have entered wrong input");
          exit(0);
        }
   }
   for (i = 0; i < n-2; i++)
   {
        if(a[i]==1&&a[i+1]==1&&a[i+2]==1)
        {
        printf("yes machine accepting three consecutive one............\n");
        break;
        }
    }
    if(i==n-2)
    {
      printf("machine not accepting three consecutive one");
    }
       return 0;
}
