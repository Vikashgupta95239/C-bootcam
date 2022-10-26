/*Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/ 
#include<iostream>
using namespace std;
class number
{
int x,y,z;
public:
void input()
{
    cout<<"Enter three number";
    cin>>x>>y>>z;
}
void display()
{
    cout<<"x==>"<<x<<"\ny==>"<<y<<"\nz==>"<<z<<endl;
}
 void operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
};
int main()
{
    number n;
    n.input();
    -n;
    n.display();
}
