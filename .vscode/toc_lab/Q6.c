//6 write a program to find 2's complement of given binary number 
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
    int onescomple[n];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
           {
            onescomple[i]=0;
           }
            else
            {
            onescomple[i]=1;
            }
    }
    for(int j=n-1;j>=0;j--)
    {   
        
        if(onescomple[j]==1)
        {
            onescomple[j]=0;
        }
        else
        {
          onescomple[j]=1;
          break;
        }
    }
    printf("2's complement of binary number is");
    for(i=0;i<n;i++)
    {
        printf("%d",onescomple[i]);
    }
}

    
    