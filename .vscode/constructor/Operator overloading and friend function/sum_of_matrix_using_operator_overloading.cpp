/*Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
Outpu*/
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3],b[3][3],sum[3][3];
    public:
    void input();
    void display();
    void operator+(Matrix m);
};
void Matrix::input()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>> a[i][j];
        }
        cout<<endl;
    }
}
//Matrix Matrix::operator+(Matrix m2
void Matrix::operator+(Matrix m2)

{
    //Matrix m;
    int i,j;
    int m[i][j];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        { 

            m[i][j]=a[i][j]+m2.a[i][j];
            
            
        }
    }
    //return m;
}
int main()
{
    Matrix m,m1,m3;
    m.input();
    cout<<"enter the element of second matrix"<<endl;
    m1.input();
    m3.display();
}