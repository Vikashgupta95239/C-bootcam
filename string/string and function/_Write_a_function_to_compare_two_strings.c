#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100],str1[100];
    printf("enter the two  string");
    fgets(str,100,stdin);
    fgets(str1,100,stdin);
    printf("comperison=%d",strcmp(str,str1));
}
