#include<iostream>
#include<conio.h>
int smallest(int arr[],int n);
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
cout<<"  "<<smallest(a,n);
return 0;
}
int smallest(int arr[],int n)
{
    int i,max=0;
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max>arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}