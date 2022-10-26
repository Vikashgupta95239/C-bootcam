#include<iostream>
#include<conio.h>
using namespace std;
void maxnumber(int x,int y)
{
    if(x>y)
    {
        cout<<"grater \n"<<x;
    }
    else
    cout<<"grater \n"<<y;

}
void maxnumber(float x,float y)
{
    if(x>y)
    {
        cout<<"grater \n"<<x;
    }
    else
    cout<<"grater \n"<<y;

}
int main(){
int a,b;
cout<<"enter the two number \n";
cin>>a>>b;
maxnumber(a,b);
return 0;
}