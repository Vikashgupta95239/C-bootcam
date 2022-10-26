#include<iostream>
#include<conio.h>
float circle(int );
using namespace std;
int main(){
int r;
cout<<"enter the number";
cin>>r;
cout<<"area of circle"<<circle(r);
return 0;
}
float circle(int r)
{
    return(3.14*r*r);
}