#include<iostream>
#include<conio.h>
using namespace std;
class cube_volum
{
    private:
    int side;
    int volum;
    public:
    cube_volum(int s)
    {
        side=s;
        cout<<side*side*side;
    }
};
int main()
{
cube_volum v(5);
return 0;
}