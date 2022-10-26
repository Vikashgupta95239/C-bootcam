#include<stdio.h>
int main()
{
    int i,c=0,k=0;
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
    }
    if(c>=1&&k>=1)
    printf("string is alphanumeric");
    else
    printf("not alphanumeric ");
}