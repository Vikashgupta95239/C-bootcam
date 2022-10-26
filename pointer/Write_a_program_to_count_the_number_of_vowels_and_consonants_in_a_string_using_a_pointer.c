#include<stdio.h>
#include<string.h>
void length(char *ptr,int n);
int main()
{
    char str[100];
    printf("enter the string ");
    gets(str);
    strlwr(str);
    length(str,100);
}
void length(char *ptr,int n)
{
    int i,vow=0,con=0;
    for(i=0;ptr[i];i++)
    {
        if(ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u')
         vow++;
         else
         con++;
    }

    printf("vowel %d \nconsonent %d",vow,con);
}