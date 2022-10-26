#include<iostream>
#include<conio.h>
//int add(int a,int b,int c=0);
using namespace std;
int add(int a,int b,int c=0)
{
return a+b+c;
}
int main(){
    int a,b,c;
cout<<"Enter the two number";
cin>>a>>b;
cout<<"sum of two number"<<add(a,b)<<endl;
cout<<"Enter the three number";
cin>>a>>b>>c;
cout<<"sum of three number"<<add(a,b,c);
return 0;
}