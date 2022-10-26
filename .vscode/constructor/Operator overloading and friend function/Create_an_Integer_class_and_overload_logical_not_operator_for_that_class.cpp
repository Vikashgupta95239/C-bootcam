#include<iostream>
using namespace std;
class integer 
{
int n;
public:
// integer(int i):n(i){}
void setdata(int i)
{
    n=i;
}
int getdata()
{
return n;
}
int operator!()
{
    return -n;
}
};
int main()
{
    integer x;
    x.setdata(5);
    int m;
    m=x.getdata();
    cout<<!m;
}