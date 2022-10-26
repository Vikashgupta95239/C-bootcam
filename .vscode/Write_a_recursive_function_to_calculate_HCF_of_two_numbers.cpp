#include<iostream>
#include<conio.h>
void hcf(int a,int b);
using namespace std;
int main(){
int a,b;
cout<<"enter the two number";
cin>>a>>b;
hcf(a,b);
return 0;
}
void hcf(int a,int b)
{
    if(b==0)
    return;
    else
    {
    hcf(b,a%b);
    cout<<" "<<b;
    exit(0);
    }
    


}