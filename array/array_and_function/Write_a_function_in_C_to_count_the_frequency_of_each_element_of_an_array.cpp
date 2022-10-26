#include<iostream>
#include<conio.h>
void frequency(int arr[],int n);
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
frequency(a,n);
return 0;
}
void frequency(int arr[],int n)
{ 
    int i,j,c;
    for(i=0;i<n;i++)
    {   
         if(arr[i]!=-1)
         {
         c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=-1;
            }
        }
         
    
        cout<<arr[i]<<"...."<<c<<"\n";
         }
    }
        
    
}