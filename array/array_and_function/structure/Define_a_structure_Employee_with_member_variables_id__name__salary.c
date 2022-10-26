#include<stdio.h>
#include<string.h>
struct employee
{
    int empid;
    char empname[30];
    float empsalary;
};
int main()
{   struct employee e={1,"fjg",8.9};
   e.empname[strlen(e.empname)-1]='\0';
     printf("employee id =%d\n",e.empid);
      printf("employee name =%s\n",e.empname);
       printf("employee salary =%f\n",e.empsalary);
    return 0;
}