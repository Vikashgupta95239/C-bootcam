#include<iostream>
#include<conio.h>
void sortm(int arr[],int n);
using namespace std;
int main(){
int n,m,i;
cout<<"enter the size of first array\n";
cin>>n;
cout<<"enter the size of second array";
cin>>m;
int a[n],b[m],c[m+n];
cout<<"enter the element of first array";
for( i=0;i<n;i++)
{
cin>>a[i];
c[i]=a[i];
}
cout<<"enter the element of second array";
for(int j=0;j<n;j++)
{
cin>>b[j];
c[i]=b[j];
i++;
}
int t=m+n;
sortm(c,t);
return 0;
}
void sortm(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        cout<<" "<<arr[j];
    } 
}