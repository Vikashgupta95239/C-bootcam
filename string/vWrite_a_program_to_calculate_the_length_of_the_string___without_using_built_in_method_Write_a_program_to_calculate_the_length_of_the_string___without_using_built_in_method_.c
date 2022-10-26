#include<stdio.h>
int main()
{
    int i;
    char str[100];
    printf("enter the  string for counting the length");
    fgets(str,100,stdin);
    for(i=0;str[i];i++);
    printf("%d",i-1);


}