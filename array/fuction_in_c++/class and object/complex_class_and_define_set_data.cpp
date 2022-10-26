#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    // void getdata()
    // {
    //     int x,y;
    //     cout<<"enter the real and imaginary part\n";
    //     cin>>x>>y;

    // }
    void showdata()
    {  
        cout<<"real part"<<a<<"\nimaginary part "<<b;
    }
    // complex add(complex c)
    // {
    //     complex temp;
    //     temp.a=a+c.a;
    //     temp.b=b+c.b;
    //     return temp;

    // }
        complex operator +(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;

    }
};
int main()
{
complex c1,c2,c3;
//c1.getdata();
c1.setdata(4,5);
c2.setdata(5,4);
c3=c1+c2;

c3.showdata();

return 0;
}   