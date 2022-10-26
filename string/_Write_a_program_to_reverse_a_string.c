#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[100],str1[100],temp[1];
    printf("enter the  string for reverse\n");
    fgets(str, 100,stdin);
    //printf("%s",strrev(str));
    //2nd way
    i=strlen(str)-1;
    for(j=0;j<=i;j++)
    {
        temp[0] = str[j];
        str[j] = str[i];
        str[i] = temp[0];
        i--;
    }
   printf("%s",str);
}