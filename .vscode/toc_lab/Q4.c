//4 design a program for starting a machine which accepting staring having equal number of 0, and 1
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
    if(one==zero)
    
        printf("yes having equal zero and one............\n");  
        
        else
           printf("not having equal zero and one............\n");  

}
