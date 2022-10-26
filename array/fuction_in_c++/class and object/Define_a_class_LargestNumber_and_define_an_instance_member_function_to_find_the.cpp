#include<iostream>
#include<conio.h>
using namespace std;
class findlargest
{
private:
int a,b,c,largest;
public:
void setdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
int largestnumber()
{
    return largest;
}
void calculatelargest()
{
    if(a>b && a>c)
    {
        largest=a;
    }
    else
    {
        if(b>c)
        {
            largest=b;
        }
        else
        largest=c;
    }
}
};
int main(){
findlargest f;
f.setdata(5,6,6);
f.calculatelargest();
cout<<f.largestnumber();

return 0;
}