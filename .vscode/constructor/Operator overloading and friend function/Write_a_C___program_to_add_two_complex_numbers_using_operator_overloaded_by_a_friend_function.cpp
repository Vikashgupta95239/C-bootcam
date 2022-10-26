//Write a C++ program to add two complex numbers using operator overloaded by a friend function
//friend function
#include<iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int imaginary;
    public:
    void setdata(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<"real part  "<<real<<endl<<"imaginary part   "<<imaginary<<endl;

    }
    friend complex operator+(complex c1,complex c2);
};

     complex operator+(complex c1,complex c2)//+ operator overload 
    {
      complex temp;
      temp.real=c1.real+c2.real;
      temp.imaginary=c1.imaginary+c2.imaginary;
      return temp;
    }


int main()
{
    complex c1,c2,c3;
     c1.setdata(5,6);
     c2.setdata(5,6);
     c3=c1+c2;//+operator overload
     c3.display();

}
