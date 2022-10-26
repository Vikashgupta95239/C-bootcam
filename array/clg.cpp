#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n],b[n];
cout<<"enter the in sorted order element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n-1;i++)
{
    int temp,temp2;
    temp=a[i+1];
    temp2=a[i];
    a[i]=temp;
    a[i+1]=temp2;
    i++;

}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}