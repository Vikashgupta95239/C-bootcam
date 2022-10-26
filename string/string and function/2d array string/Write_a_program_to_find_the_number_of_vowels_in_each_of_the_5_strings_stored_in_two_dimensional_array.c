#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,c=0;
    char str1[5][20],str[5][20];
    for(i=0;i<=4;i++)
    {  printf("enter the city name=%d",i+1);
        fgets(str1[i],20,stdin);
       
    }
     for(i=0;i<=4;i++)
    { 
       c=0;
       strcpy(str[i],str1[i]);
       strlwr(str1[i]);
        for(j=0;str[i][j];j++)
        { 

          if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')  
          {
            c++;
          }
        }
        // printf("\n   ");
      printf("%d====>%s",c,str[i]); 
    }
}