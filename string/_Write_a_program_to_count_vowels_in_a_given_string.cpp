#include<stdio.h>
int main()
{
    int i,c=0,j;
    char str[1000],occ;
    char vow[]={'a','e','i','o','u'};
    printf("enter the string ");
    fgets(str,100,stdin);
     for(i=0;vow[i];i++)
     {
        for(j=0;str[j];j++)
        {
            if(str[j]==vow[i])
            {
                c++;
            }
        }
         }
         printf("total vowel %d",c);
}