/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings*/
#include<iostream>
#include<cstring>
using namespace std;
class string
{
    private:
    char str1[500];
    char str2[500];
    char con[1000];
    public:
    void input()
    {
        cout<<"enter the name "<<endl;
        cin.getline(str1,500);
        // cout<<"enter the 2nd name "<<endl;
        // cin.getline(str2,500);
    }
    void display()
    {
        cout<<"you have entered string\n"<<con<<endl;
        
    }
    string operator+(string s)
    {
        string s;
        return strcat(str1,s.str1);
    }

};
int main()
{
    string s1,s2,s3;
    s1.input();
    cout<<"enter the second string"<<endl;
    s2.input();

    s3=s1+s2
    s3.display();

}