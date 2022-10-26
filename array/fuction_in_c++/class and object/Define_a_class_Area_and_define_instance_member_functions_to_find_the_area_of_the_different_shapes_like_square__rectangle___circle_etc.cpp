#include<iostream>
#include<conio.h>
using namespace std;
class Area
{ 
    private:
    int side,sqarea;
    int length,breadth,rectanglearea;
    int radius;
    float circlearea;
    public:
    void set_date_of_square(int s)
    {
        side=s;
    }
    int calculate_area_of_square()
    {
         sqarea=side*side;
         return sqarea;
    }
    void set_data_of_rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int calculate_area_of_rectangle()
    {
        rectanglearea=length*breadth;
        return rectanglearea;
    }
    void set_data_of_circle(int r)
    {
        radius=r;
    }
    float calculate_area_of_circle()
    {
        circlearea=3.14*radius*radius;
        return circlearea;
    }
};
int main(){
    Area a,b;
    a.set_date_of_square(5);
    cout<<a.calculate_area_of_square()<<endl;
    a.set_data_of_rectangle(5,6);
    cout<<a.calculate_area_of_rectangle()<<endl;
     a.set_data_of_circle(4);
     cout<<a.calculate_area_of_circle()<<endl;
         b.set_date_of_square(7);
    cout<<b.calculate_area_of_square()<<endl;
    b.set_data_of_rectangle(9,6);
    cout<<b.calculate_area_of_rectangle()<<endl;
     b.set_data_of_circle(49);
     cout<<b.calculate_area_of_circle()<<endl;

return 0;
}