#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n],b[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
    b[i]=a[i];
} 
for(i=0;i<n;i++)
{
cout<<" "<<b[i];
} 
}