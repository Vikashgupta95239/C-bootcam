#include<iostream>
#include<conio.h>
void sorting(int arr[],int n);
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sorting(a,n);
return 0;
}
void sorting(int arr[],int n)
{
    int temp,i;
    for(int j=0;j<n;j++)
{
for(i=0;i<n-j-1;i++)
{
    if(arr[i]<arr[i+1])
    {
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    }
}
cout<<" "<<arr[i];
}
}