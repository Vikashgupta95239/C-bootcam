#include<stdio.h>
int main()
{
    int i,c=0;
    char str[100],occ;
    printf("enter the string ");
    fgets(str,100,stdin);
    printf("enter the character to find the occurance");
    scanf("%c",&occ);
    for(i=0;str[i];i++)
    {

        if(str[i]==occ)
        {
            c++;
        }

    }
    printf("total occrance is=%d",c);

}