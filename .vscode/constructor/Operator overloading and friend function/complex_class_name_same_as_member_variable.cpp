// Define a class Complex with appropriate instance variables and member functions.
// One of the functions should be setData() to set the properties of the object. Make
// sure the names of formal arguments are the same as names of instance variables
#include<iostream>
using namespace std;
class complex {
private:
int real,img;
public:
void setdata(int real,int img)
{
    this->real=real;
    this->img=img;
}
void display()
{
    cout<<"real "<<real<<endl<<"img "<<img<<endl;
}


};
int main()
{
    complex c;
    c.setdata(5,6);
    c.display();
}