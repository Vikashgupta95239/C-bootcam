#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,temp;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
} 
for(i=n-1;i>=0;i--)
{
cout<<" "<<a[i];
} 
}