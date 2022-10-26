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
// for(i=0;i<n-1;i++)
// {
//     if(a[i]>a[i+1])
//     {
//      temp=a[i];
//     a[i]=a[i+1];
//     a[i+1]=temp;
//     }
// }
// cout<<a[i];
// }

// 2nd way to find the greatest element
int max=a[0];
for(i=1;i<n;i++)
{
    if(max<a[i])
    {
     max=a[i];
    }
}
cout<<"greatest number "<<max;
}