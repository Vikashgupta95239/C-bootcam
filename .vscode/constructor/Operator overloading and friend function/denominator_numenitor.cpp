
/*Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output*/
#include<iostream>
using namespace std;
class fraction
{
long num;
long deno;
public:
fraction (long n=0, long d=0)
{
num=n;
deno=d;
}
friend void operator>>(istream &in,fraction &f)
{
    cout<<"\n numeroter   ";
    in>>f.num;
  cout<<"\n denominator ";
    in>>f.deno;
}
friend void operator<<(ostream &out,fraction &f)
{
    out<<f.num<<"/"<<f.deno;
}

fraction operator++()
{
    ++num;
    ++deno;
    return (*this);
}
fraction operator++(int s)
{
    fraction tmp=*this;
   // fraction temp;
    num++;
    deno++;
    return tmp;
}
};
int main()
{
    fraction f1,f2;
    cout<<"\n f1        :";
    cout<<f1;
    cout<<"\n f2        :";
    cout<<f2;
    cout<<endl;
    cout<<"\n\n Enter the 1st fraction\n";
    cin>>f1;
    cout<<f1;
    cout<<"           "<< endl;
    f1++;
    cout<<f1;
    cout<<"\n ++f      ";
    ++f1;
    cout<<f1;
     cout<<"\n\n Enter the second fraction value\n";
     cin>>f2;
     cout<<"\n f2     =++f1";
     cout<<"\n f2        : ";
     cout<<f2;
     f2=f1++;
     cout<<"\n\n f2=f1++";
     cout<<"\n f1    :";
     cout<<f1;
     cout<<"\nf2      :";
     cout<<f2;
     return 0;


}

