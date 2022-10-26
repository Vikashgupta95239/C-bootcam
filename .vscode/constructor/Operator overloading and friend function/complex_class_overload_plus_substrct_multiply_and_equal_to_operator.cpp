/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
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
    // complex operator+(complex c3)//+ operator overload 
    // {
    //   complex temp;
    //   temp.real=real+c3.real;
    //   temp.imaginary=imaginary+c3.imaginary;
    //   return temp;

    // }
    //    complex operator-(complex c3)//- operator overload 
    // {
    //   complex temp;
    //   temp.real=real-c3.real;
    //   temp.imaginary=imaginary-c3.imaginary;
    //   return temp;

    // }
    //        complex operator * (complex c3)//* operator overload 
    // {
    //   complex temp;
    //   temp.real=real*c3.real;
    //   temp.imaginary=imaginary*c3.imaginary;
    //   return temp;

    // }
    int operator==(complex c3)
    {
     if(real==c3.real&&imaginary==c3.imaginary)
     return 1;
     else
     return 0; 
    }

};
int main()
{
    // complex c1,c2,c3;
    //  c1.setdata(5,6);
    //  c2.setdata(5,6);
    //  c3=c1+c2;//+operator overload
    //  c3.display();
    // complex c1,c2,c3;
    //  c1.setdata(10,12);
    //  c2.setdata(5,6);
    //  c3=c1-c2;//- operator overload
    //  c3.display();

    //     complex c1,c2,c3;//* operator overload 
    //  c1.setdata(10,12);
    //  c2.setdata(5,6);
    //  c3=c1*c2;
    //  c3.display();
         complex c1,c2;//* operator overload 
     c1.setdata(10,12);
     c2.setdata(5,6);
    int c3;
    c3=c1==c2;
     if(c3==1)
     {
        cout<<" both number equal"<<endl;
     }
     else
     cout<<"not equal number number"<<endl;
    
}
