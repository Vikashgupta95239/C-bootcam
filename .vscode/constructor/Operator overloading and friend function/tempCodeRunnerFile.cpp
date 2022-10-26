#include<iostream>
using namespace std;
class distance
{
  private:
  int feet,inch;
  public:
  distance()
  {
    feet=0;
    inch=0;
  }
  distance(int x,int y)
  {
    feet=x;
    inch=y;
    cout<<feet<<endl<<inch<<endl;
  }
};