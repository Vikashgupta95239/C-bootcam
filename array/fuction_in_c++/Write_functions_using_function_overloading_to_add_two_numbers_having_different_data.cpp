#include<iostream>
#include<conio.h>
using namespace std;
int sum(int x ,int y)
{
return x+y;
}
float sum(double x,double y)
{
    return x+y;
}
int main(){
int a,b;
cout<<"enter two number \n";
cin>>a>>b;
cout<<" "<<endl<<sum(a,b);
cout<<"enter two number\n";
cin>>a>>b;
cout<<" "<<sum(a,b);
return 0;
}