#include<iostream>
#include<conio.h>
void duplicate(int arr[],int n);
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
duplicate(a,n);
return 0;
}
// void duplicate(int arr[],int n)
// {
// int i,j,c=0;
// for(i=0;i<n;i++)
// {  
//     if(arr[i]!='n')
//     {   cout<<"  "<<arr[i];
//     for(j=i+1;j<n;j++)
//     {
//       if(arr[i]==arr[j])
//       {
//          c++;
//          arr[j]='n';
//       }
//     }
//     }
// }

// cout<<" total duplicate number is  s"<<c;
void duplicate(int arr[],int n)
{
int i,j,c=0;
for(i=0;i<n;i++)
{  c=0;
   
    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
         c++;
      }
    }
    if(c==0)
    {
      cout<<" "<<arr[i];
    }
    
}
}