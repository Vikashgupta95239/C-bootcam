#include<stdio.h>
int main()
{
    int n,m,p,c,e,h;
    printf("enter the marks of math");
    scanf("%d",&m);
    printf("enter the marks of physics");
    scanf("%d",&p);
    printf("enter the marks of chemistry");
    scanf("%d",&c);
    printf("enter the marks of english");
    scanf("%d",&e);
    printf("enter the marks of hindi");
    scanf("%d",&h);
    if(m<33 && p<33 && c<33 &&e<33 && h<33)
     printf("you are fail");
    else
    printf("congratulation you are paas in evary subject");
   
    
}