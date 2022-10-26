#include<stdio.h>
int main()
{
    int i,c=0,k=0,l=0;
    char str[1000];
    printf("enter the string ");
    fgets(str,1000,stdin);
    for(i=0;str[i];i++)
    {
         if ((str[i]>= 65 && str[i]<= 90)
        || (str[i]>= 97 && str[i]<= 122))
        { 
            c++;
        }
    else if (str[i]>=48 &&str[i]<= 57)
    {
        k++;
       
    }
    else
    {
        l++;
      
    }
    }
            printf("total alphabet =%d\n",c);
             printf("total digits=%d\n",k);
               printf("total speacial character %d\n",l);

}