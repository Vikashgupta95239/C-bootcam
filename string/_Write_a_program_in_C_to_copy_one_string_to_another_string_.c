#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100],str1[100];
    printf("enter the  string");
    fgets(str, 100,stdin);
    for(i=0;str[i];i++)
    {
        str1[i]=str[i];
    }
    printf("%s",str1);
}
