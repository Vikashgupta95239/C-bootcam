#include<iostream>
#include<conio.h>
void swap(int &,int &);
using namespace std;
int main(){
int a,b;
cout<<"enter the two number";
cin>>a>>b;
swap(a,b);
cout<<"after swap "<<a<<" "<<b;
return 0;
}
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

}