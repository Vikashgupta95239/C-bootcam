/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex(int x,int y )
    {
        real=x;
        img=y;
    }
    complex(){}
    // friend ostream & operator<<(ostream &os,complex &c)
    // {
    //     os<<"real="<<c.real<<"img="<<c.img<<endl;
    //     return os;
    // }
    // .............cout<<c<<c2; we use & for printing multiple value
        friend void operator>>(ostream &os,complex c)
    {
        os<<"real="<<c.real<<"img="<<c.img<<endl;
        
    }
};
int main()
{
    complex c(5,6),c2(5,0);
    cout>>c;
    // cout<<c<<c2;

    
}