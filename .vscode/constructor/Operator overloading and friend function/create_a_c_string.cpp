// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.
#include<iostream>
#include<cstring>
using namespace std;
class Cstring
{
    char str[100];
    public:
    void input()
    {
        cin.getline(str,100);
    }
    void display()
    {
        cout<<str;
    }
    Cstring operator+(Cstring c)
    {
        Cstring m;
        strcpy(m.str,str);
        strcat(m.str,c.str);
        return m;
    }
    int operator==(Cstring t);

};
int Cstring::operator==(Cstring t)
{
    // for(int i=0;str[i]!='\0';i++)
    // {
    //     for(int j=0;str[j]='\0';j++)
    //    {
    //     if(str[i]!=t.str[j])
    //     {
    //         return 0;
    //     }
    //     else
    //     {
    //         return 1;
    //     }
    //    }
    
    // }
    int r=strcmp(str,t.str);
    return r;

}
int main()
{
    Cstring s1,s2,s3;
    int result=0;
    cout<<"enter first string"<<endl;
    s1.input();
    cout<<"enter second string"<<endl;
    s2.input();
    cout<<" first string      :   "<<endl;
    s1.display();
    cout<<" second string      :   "<<endl;
    s2.display();
    s3=s1+s2;
    cout<<"concatinate string is   "<<endl;
    s3.display(); 
    cout<<endl;
    result=s1==s2;
    if(result==0)
    {
        cout<<"equal string"<<endl;

    }
    else
    {
        cout<<"not equal string"<<endl;
    }
}