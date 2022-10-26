#include<iostream>
using namespace std;
float area(int r )
{
return(3.14*r*r);
}
int  area(int a,int b )
{
   return a*b;
}

float area(double a,double b)
{
    return (a*b)/2;
}
int main()
{
 int a,b;
    cout<<"area of circle"  <<area(5)<<endl;
    cout<<"area of ractangle "<<area(4,5)<<endl;
    cout<<"area of triangle is"<<area( 4.5, 6.34)<<endl;
    
}