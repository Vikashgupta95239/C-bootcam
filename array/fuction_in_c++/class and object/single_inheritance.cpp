#include<iostream>
using namespace std;
class A
{  public:
     private:
    void f1()
    {
        printf("hello");
    }
  protected:
    void f1()
    {
        printf("hello protected ");
    }
};
class v2:public A
{

};
int main()
{
    A a;
    a.f1();
}
