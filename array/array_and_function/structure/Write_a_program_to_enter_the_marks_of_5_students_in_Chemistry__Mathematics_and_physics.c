/* Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student*/
#include<stdio.h>
struct student
{
  char name[20];
  int rollnumber;
float phy_marks,chem_marks,math_marks;
};
int main()
{   struct student marks[5];
float p[5];
for(int i=0;i<5;i++)
{
    int sum=0;
    
    printf("enter the name of student\n");
    gets(marks[i].name);
    fflush(stdin);
    printf("enter the roll number of student\n");
    scanf("%d",&marks[i].rollnumber);
    printf("enter the marks of physics out of 100\n");
    scanf("%f",&marks[i].phy_marks);
    printf("enter the marks of chemistry out of 100\n");
    scanf("%f",&marks[i].chem_marks);
    printf("enter the marks of math out of 100\n");
    scanf("%f",&marks[i].math_marks);
    sum=marks[i].phy_marks+marks[i].chem_marks+marks[i].math_marks;
    
    p[i]=(sum*100)/300;
}
    for(int i=0;i<5;i++)
    {
    printf("rollnumber of student is %d \n precentage is =%.3f",marks[i].rollnumber,p[i]);
    }  
}