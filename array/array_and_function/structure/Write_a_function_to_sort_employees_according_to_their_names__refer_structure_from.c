#include<stdio.h>
#include<string.h>
struct employee
{    int empid;
    char name[30];
    float salary;
};
struct employee input()
{  
    struct employee e;
    printf("enter the employee id\n");
    scanf("%d",&e.empid);
        fflush(stdin);
        printf("enter the employee name\n");
       gets(e.name);
    printf("enter the employee salary\n");
    scanf("%f",&e.salary);
    return e;
}
void display(struct employee e[5])
{  int i;
    for(i=0;i<5;i++)
    {
    printf("employee id =%d\n",e[i].empid);
     printf("employee name =%s\n",e[i].name);
      printf("employee id =%f\n",e[i].salary);
    }
}
struct employee sortbyname(struct employee e[])
{   int i,j;
   struct employee temp; 
//struct employee e[5];
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if((strcmp(e[j].name,e[j+1].name))>0)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;

            }
        } 
    }
}
int main()
{   struct employee b[5];
int i;
   for(i=0;i<5;i++)
    b[i]=input();

    sortbyname(b);
    display(b);
}
