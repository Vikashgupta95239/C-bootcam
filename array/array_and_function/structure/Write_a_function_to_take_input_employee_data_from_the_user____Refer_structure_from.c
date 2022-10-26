#include<stdio.h>
#include<string.h>
struct employee
{
    int empid;
    char empname[30];
    float empsalary;
};
void input(struct employee e)
{
    printf("enter the employee id name salary\n");
    scanf("%d",&e.empid);
    fflush(stdin);
    fgets(e.empname,30,stdin);
    scanf("%f",&e.empsalary);
       e.empname[strlen(e.empname)-1]='\0';
     printf("employee id =%d\n",e.empid);
      printf("employee name =%s\n",e.empname);
       printf("employee salary =%f\n",e.empsalary);
}
int main()
{    struct employee e;
     input(e);
    return 0;
}