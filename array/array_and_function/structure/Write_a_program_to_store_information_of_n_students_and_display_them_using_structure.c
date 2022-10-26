#include<stdio.h>
#include<string.h>
struct student
{
    int studentid;
    char name[30];
     char branch[10];
};
void input(int n)
{  int i;

    struct student e[n];
    for(i=0;i<n;i++)
    {
    printf("enter the student  id\n");
    scanf("%d",&e[i].studentid);
        fflush(stdin);
        printf("enter the student  name\n");
       gets(e[i].name);
    printf("enter the student  branch \n");
    scanf("%s",&e[i].branch);
    }
}
void display(int n)
{  int i;
    struct student e[n];
    for(i=0;i<n;i++)
    {
    printf("student id =%d\n",e[i].studentid);
     printf("student  name =%s\n",e[i].name);
      printf("enter student branch =%s\n",e[i].name);
    }
}
int main()

{   
    int n;
      printf("enter the number of student\n");
  scanf("%d",&n);
    input(n);
    display(n);
}