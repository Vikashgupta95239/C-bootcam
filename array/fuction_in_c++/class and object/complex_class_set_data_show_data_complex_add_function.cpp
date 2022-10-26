#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{   
    private:
    int realpart,imaginarypart;
    public:
    void setdata(int r,int i)
    {
        realpart=r;
        imaginarypart=i;

    }
    void showdata()
    {
        cout<<"realpart->"<<realpart<<endl<<"imaginarypart->"<<imaginarypart<<endl;
    }
    complex add(complex c2)
    { 
        complex temp;
        temp.realpart=realpart+c2.imaginarypart;
        temp.imaginarypart=imaginarypart+c2.imaginarypart; 
        return temp;

    }

};
int main(){
complex c1,c2,c3;
c1.setdata(4,5);
c2.setdata(6,7);
c3=c1.add(c2);
c3.showdata();
return 0;
}