#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n;
cout<<"enter the year";
cin>>n;
if(n%400==0||(n%100!=0)&&n%4==0)
    cout<<"leep year";
else
cout<<"not leap year";
return 0;
}