#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i;
cout<<"enter the number";
cin>>n;
for(i=1;i<=n;i++)
{
    if(i%2==0)
    cout<<" "<<i*i;

}
return 0;
}