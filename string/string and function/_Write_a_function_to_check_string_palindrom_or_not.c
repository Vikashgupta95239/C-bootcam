#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0,k;
    char str[100],str1[100],temp[1];
    printf("enter the  string for reverse\n");
    //fgets(str, 100,stdin);
    gets(str);
    strcpy(str1,str);
    //printf("%s",strrev(str));
    //2nd way
    i=strlen(str)-1;
    int m=i;
    for(j=0;j<=i;j++)
    {
        temp[0] = str[j];
        str[j] = str[i];
        str[i] = temp[0];
        i--;
    }
    for(k=0;str[k];k++)
    {
    
    if(str1[k]!=str[k])
    {
       printf("not palindrome");
    break;  
    }
    }
    if(k==m+1)
    printf("palindrom");
    
  
}