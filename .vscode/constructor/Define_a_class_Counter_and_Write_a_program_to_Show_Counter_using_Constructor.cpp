#include<iostream>
#include<conio.h>
using namespace std;
class counter
{
private:
static int count;
public:
counter() 
{
    count++;
}
void display()
{
    cout<<count;
}
};
int counter::count;
int main(){
    counter c,b,d;
    c.display();

return 0;
}