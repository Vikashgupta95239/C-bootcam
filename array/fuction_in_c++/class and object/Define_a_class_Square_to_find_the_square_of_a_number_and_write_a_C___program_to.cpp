#include<iostream>
#include<conio.h>
using namespace std;
class findsquare
{
private:
int n,square;
static int count; 
public:
void setdata(int x)
{
    n=x;
}
int getsquare()
{
    return square;
}
void calcultesquare()
{
    square=n*n;
    count++;
}
int countingfunctioncall()
{
    return count;
}
};
int findsquare::count=0;
int main(){
findsquare s,s1;
s.setdata(40);
s.calcultesquare();
s1.setdata(80);
s1.calcultesquare();
cout<<s.getsquare()<<endl;
cout<<s1.getsquare()<<endl;
cout<<"\ntotal call of function is \n"<<s.countingfunctioncall();
return 0;
}