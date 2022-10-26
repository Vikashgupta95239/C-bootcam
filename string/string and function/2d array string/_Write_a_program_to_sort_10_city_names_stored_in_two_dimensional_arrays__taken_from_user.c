#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][20],temp[20];
    int i,j;
    printf("enter the 5 string");
    for(i=0;i<10;i++)
    {
        gets(a[i]);
    }
    // strcpy(b,a);
    // for(j=0;j<10;j++)
    //  { 
    //     for(i=0;i<10-1-j;i++)
    //     {
    //     if((strcmp(a[i],a[i+1]))>0)
    //     {
    //         strcpy(temp,a[i]);
    //         strcpy(a[i],a[i+1]);
    //         strcpy(a[i+1],temp);
    //     }
    //     }
    // }
    ////2nd way
    for(j=0;j<10-1;j++) 
        { 
        for(i=j+1;i<10;i++)
        {
        if((strcmp(a[j],a[i]))>0)
        {
            strcpy(temp,a[j]);
            strcpy(a[j],a[i]);
            strcpy(a[i],temp);
        }
        }
    }
      for(i=0;i<5;i++)
    {
       printf("   %s\n",a[i]);
    }
    
}