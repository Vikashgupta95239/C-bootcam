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
// for(int j=0;j<2;j++)
// {
// for(i=0;i<n-j;i++)
// {
//     if(a[i]>a[i+1])
//     {
//      temp=a[i];
//     a[i]=a[i+1];
//     a[i+1]=temp;
//     }
// }
// }
// cout<<" "<<a[i-1];

// }
int max1=a[0];
int max2=a[1];
for(i=2;i<n;i++)
{
    if(max1<a[i])
    {
    max1=a[i];
    }
    else 
    {
        if(max2<a[i])
        max2=a[i];
    }

}
cout<<" "<<max2;
}