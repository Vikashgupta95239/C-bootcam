#include<stdio.h>
#include<string.h>
void reverse(char str[1000]);
int main()
{    int i,j=0,k;
    char str[1000],str1[1000],temp[1];

printf("enter the string");
fgets(str,1000,stdin);
for(i=j;str[i];i++)
{
    while (str[i])
    {
       if(str[i]==32)
       {
        break;
       }
       i++;
    }
    j=i+2;
    printf("%d ",j);
    
}
}







// reverse(str);
// }
// void reverse(char str[1000])
// {   printf("%s",str);
//   char temp[1],str1[1000];
//     int i,j=0;
//    j=(strlen(str)-1); 
//    for(i=0;i<j;i++)
//    {    
//     temp[0]=str[i];
//     str[i]=str[j];
//     str[j]=temp[0];
//     j--;
//    }
//     printf("%s",str);

// }