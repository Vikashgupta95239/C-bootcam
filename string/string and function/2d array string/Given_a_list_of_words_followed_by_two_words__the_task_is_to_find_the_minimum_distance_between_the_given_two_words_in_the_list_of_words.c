#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char words[5][20]={"the","quick","brown","fox","quick"};
 char word1[] = "the";
char word2[]= "fox";
int i,c=-1,b=-1,t,min=1000;
for(i=0;i<5;i++)
{
    if((strcmp(word1,words[i]))==0)
    {
c=i;
    }
      if((strcmp(word2,words[i]))==0)
    {
b=i;
    }
    if(c!=-1&&b!=-1)
    {
      t=abs(c-b);
      if(t<min)
      {
        min=t;
      }
    }
  
} 
printf("%d ",t-1); 
}