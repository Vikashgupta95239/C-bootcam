// /*Create a Distance class having 2 instance variable feet and inches. Also create
// default constructor and parameterized constructor takes 2 variables . Now overload ()
// function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
// inches = a+b + 15*/
#include<iostream>
using namespace std;
class Distance
{
  private:
  int feet,inch;
  public:
  Distance()
  {
    feet=0;
    inch=0;
  }
  Distance(int x,int y)
  {
    feet=x;
    inch=y;
   
  }
Distance operator()(int a,int b,int c)
  {
  Distance d;
  d.feet= a + c + 5;
  d.inch=a+b + 15;
  return d;
  }
  void display()
  {
    cout<<feet<<endl<<inch<<endl;
  }
};
int main()
{
  Distance d(5,10),d1;
  Distance d2;
  d1=d(5,6,7);
  //d.display();
  d1.display();
}