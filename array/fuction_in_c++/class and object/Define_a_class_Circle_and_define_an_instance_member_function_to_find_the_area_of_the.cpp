#include<iostream>
#include<conio.h>
using namespace std;
class areacircle
{
    private:
    int radius;
    float area;
    public:
    void setdata(int r)
    {
        radius=r;
    }
    void calculatearea()
    {
         area=3.14*radius*radius;
    }
    float Area()
    {
        return area;
    }
};
int main()
{
    areacircle r;
    r.setdata(4);
    r.calculatearea();
    cout<<r.Area();
    return 0;
    
}
