#include<iostream>
#include<conio.h>
using namespace std;
class box
{
private:
int length;
int breadth;
int hight;
public:
box(int l,int b,int h)
{
    length=l;
    breadth=b;
    hight=h;
}
int display_volume()
{
    return length*breadth*hight;
}
};
int main()
{
box box(10,20,30);
cout<<box.display_volume();
return 0;
}