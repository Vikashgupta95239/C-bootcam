#include<iostream>
#include<conio.h>
using namespace std;
class reversnumber
{
private:
int n,reverse;
public:
void setdata(int x)
{
    n=x;
}
int getreverse()
{
    return reverse;
}
void calculatereverse()
{ 
    int y=0,x;
    while (n)
    {
        x=n%10;
        y=y*10+x;
        n=n/10;
    }
    reverse=y;
    
}
};
int main(){
reversnumber r;
r.setdata(3476);
r.calculatereverse();
cout<<r.getreverse();
return 0;
}