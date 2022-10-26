/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
using namespace std;
class mystring
{
char str[1000];
public:
void input();
void display();
void operator!();
};
void mystring::input()
{
    cin.getline(str,1000);
}
void mystring::display()
{
    puts(str);
}
void mystring::operator !()
{
for(int i=0;str[i];i++)
{
    if(str[i]>=65 && str[i]<=90)
    {
        str[i]=str[i]+32;
    }
    else if(str[i]>=97 && str[i]<=122)
    {
        str[i]=str[i]-32;
    }
}
}
int main()
{
    mystring s;
    cout<<"enter the strig:"<<endl;
    s.input();
    !s;
    cout<<"you have entered string "<<endl;
    s.display();
}

