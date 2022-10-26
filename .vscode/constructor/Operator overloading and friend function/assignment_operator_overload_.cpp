// Create a complex class and overload assignment operator for that class
#include<iostream>
#include<stdlib.h>
using namespace std;
class complex 
{
int real,img;
public:
void setdata(int x,int y)
{
    real=x;
    img=y;
}
void display()
{
    cout<<"real "<<real<<endl<<"img "<<img<<endl;

}
// complex operator=(complex c)
// { 
// real=c.real;
// img=c.img;
// }
complex & operator=(complex &c)
{  
    real=c.real;
    img=c.img;
    return c;
    
}
};
int main()
{
    complex c1,c2,c3,c4;
    c1.setdata(4,5);
  c2=c1;
  c4=c2;
  c1=c2=c3;

  c4.display();
  
  //c2.display();
}