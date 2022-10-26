#include<iostream>
#include<conio.h>
void heighest_value_digit(int n);
using namespace std;
int main(){
    int n;
cout<<"enter the number";
cin>>n;
 heighest_value_digit(n);
return 0;
}

void heighest_value_digit(int n)
{
int digit;
digit=n%10;
n=n/10;
while(n)
{
int digit1;
digit1=n%10;
if(digit1<digit)
{
    digit=digit;
}
n=n/10;
}
cout<<"highest value digit "<<digit;
}