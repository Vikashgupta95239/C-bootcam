#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
int id;
char name[30];
char branch[20];
public:
student()
{
    cout<<"Enter the sudent id"<<endl;
    cin>>id;
    cout<<"Enter the student name"<<endl;
    fflush(stdin);
    cin.getline(name,30);
    //fgets(name,30,stdin);
    // scanf("%[^\n]s",name);
    
    cout<<"Enter the student branch"<<endl;
    fflush(stdin);
    cin.getline(branch,30);
    //scanf("%s",branch);
}
void display()
{
    cout<<"student id"<<id<<endl;
    cout<<"student name"<<name<<endl;
    cout<<"student branch"<<branch<<endl;
}
};

int main()
{
student s;
s.display();
return 0;
}