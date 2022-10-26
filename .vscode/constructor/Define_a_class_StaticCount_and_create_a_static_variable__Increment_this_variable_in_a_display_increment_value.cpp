#include<iostream>
#include<conio.h>
using namespace std;
class increment
{
private:
static int count;
public:
increment()
{
    count++;
}
int display()
{
    return count;
}
};
int increment::count;

int main(){
increment c ,cc, coc, clc, ccp, ce, cccc;
cout<<c.display();
return 0;
}