#include<stdio.h>
#include<string.h>
struct employee
{
int empid;
char empname[30];
int empsalary;
};
struct employee input()
{  struct employee e;
  printf("enter the employee id");
  scanf("%d",&e.empid);  
   printf("enter the employee name");
   fflush(stdin);
   gets(e.empname);
   printf("enter the employee salary");
  scanf("%d",&e.empsalary); 
  return e;
}
void display(struct employee b[],int n)
{
int i;
for(i=0;i<n;i++)
{
    printf("employee id=%d\n",b[i].empid);
     printf("employee name=%s\n",b[i].empname);
      printf("employee salary=%d\n",b[i].empsalary);
}
}
void highestsalary(struct employee s[],int n)
{
struct employee temp;
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
    if(s[j].empsalary<s[j+1].empsalary)
    {
      temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
    }
}
}
}

int main()
{
    struct employee e[10];
    int i;

    for(i=0;i<3;i++)
    {
     e[i]=input();
    }
    //    for(i=0;i<10;i++)
    // {
    //  display(e[i]);
    // }
    // 2nd method 
     highestsalary(e,3);
    display(e,1);
   
}