#include<stdio.h>
#include<string.h>
struct employee 
{int empid;
char empname[30];
int salary;
};
struct employee input()
{
struct employee e;
printf("enter the empid,name,salary\n");
scanf("%d",&e.empid);
fflush(stdin);
gets(e.empname);
scanf("%d",&e.salary);
return e;
}
void display(struct employee e)
{
  printf("employee id =%d\n",e.empid);
    printf("employee name =%s\n",e.empname);
      printf("employee id =%d\n",e.salary);


}
int main()
{
    struct employee e,m;
    m=input();
    display(m);
}