/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output */
#include<iostream>
using namespace std;
class Matrix
{
int a[3][3];
public:
void input();
void display();
void operator-();
};
void Matrix::input()
{
    cout<<"enter the 9 elemend of matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::operator-()
{
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=-a[i][j];
        }
    }
}
void Matrix::display()
{
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    Matrix m;
    m.input();
    -m;
    m.display();
}
