#include<iostream>
#include<windows.h>
using namespace std;
class masti
{
    public:
     char name[200];
    friend void operator>>(istream &input_lo_bachaa,masti &t)
    {   
        input_lo_bachaa>>t.name;
    }
    friend void operator<<(ostream &print_karo,masti &t)
    {
        print_karo<<"welcome to masti class ==>"<<t.name<<endl;
    }
};
int main()
{
    system("cls");
masti m;
cin>>m;
cout<<m;
}