// Create a Coordinate class for 3 variables x,y and z and overload comma operator
// such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
// c3 are objects of 3D coordinate class
#include<iostream>
using namespace std;
class cordinate3d
{
    double x,y,z;
    public:
    cordinate3d()
    {
        x=y=z=0;
    }
    // cordinate3d(double x,double y,double z)
    // {
    //     this->x=x;
    //     this->y=y;
    //     this->z=z;
    // }
    cordinate3d(double a,double b,double c)
    {
            x=a;
            y=b;
            z=c;
    }
    cordinate3d operator,(cordinate3d obj)
    {

    cordinate3d temp;
    temp.x=obj.x;
    temp.y=obj.y;
    temp.z=obj.z;
    return obj;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    } 


};
int main()
{
    cordinate3d c1(3,45,6),c2(1,23,4),c3;
    c1.display();
     c3=(c1,c2);
     c3.display();

}
