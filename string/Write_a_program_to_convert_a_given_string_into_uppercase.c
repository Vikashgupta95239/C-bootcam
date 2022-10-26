#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];
    printf("enter the  string for convert the upper case");
    fgets(str,5,stdin);
    // strupr(str);
    // printf("%s",str);



    // 2nd way
    for(i=0;str[i];i++)
    {  

        if(str[i]>=97&&str[i]<=122)
    {

       str[i]=(str[i]-32);
    }
    }
 
    printf("%s",str);
}  