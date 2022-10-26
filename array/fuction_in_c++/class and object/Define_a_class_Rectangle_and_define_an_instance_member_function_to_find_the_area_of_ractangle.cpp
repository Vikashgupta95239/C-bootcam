#include<iostream>
#include<conio.h>
using namespace std;
class ractagle
{
    private:
    int lenght,breadth;
    int area;
    public:
    void setdata(int x,int y)
    {
        lenght=x;
        breadth=y;

    }
    int findarea()
    {
        return area;
    }

    void calculatearea()
    {  
        area=lenght*breadth;
    }
};
int main(){
ractagle r;
r.setdata(5,6);
r.calculatearea();
cout<<r.findarea();
return 0;
}