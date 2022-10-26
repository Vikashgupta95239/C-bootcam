#include<stdio.h>
int main()
{
  
    // int i=0,n;
    //  while(i<3)
    //  {
    // printf("enter the evan number");
    // scanf("%d",&n);
    // if(n%2==0)
    // {
    // printf("you have win\n");
    // break;
    // }
    // else
    // printf("try again");
    // i++;
    //  }
    int x,i;
    for(i=1;i<=3;i++)
    {
        printf("\n enter an evan number");
        scanf("%d",&x);
        if(x%2==0)
        break;

    }
    if(i==4)
    printf("you have lost chance");
    else
    printf("you have win");
    
}