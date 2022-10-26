#include<iostream>
#include<conio.h>
void rotation(int arr[],int n);
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
rotation(a,n);
return 0;
}
// void rotation(int arr[],int n)
// {
//     int m,b[n],temp;
//     cout<<"enter the number rotation"; 
//     cin>>m;
//     for(int j=0;j<m;j++)
//     {
//      temp=arr[0];
//     for(int i=0;i<n-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     arr[n-1]=temp;
//     }
//     for(int i=0;i<n;i++)
//     {
//     cout<<"  "<<arr[i];
//     }  
// }


////////2nd way 
void rotation(int arr[],int n)
{
    int m,b[n],k=0;
    cout<<"enter the number rotation"; 
    cin>>m;
    for(int j=m;j<n;j++)
  {
      b[k]=arr[j];
      k++;
  }
  for(int i=0;i<m;i++)
  {
    b[k]=arr[i];
    k++;
  }
    for(int i=0;i<n;i++)
    {
    cout<<"  "<<b[i];
    }  
}
