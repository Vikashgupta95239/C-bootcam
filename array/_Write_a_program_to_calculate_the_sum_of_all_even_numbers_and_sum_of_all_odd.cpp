#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sumEv=0,sumod=0;
cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"enter the element "<<n<<"  \n";
for(i=0;i<n;i++)
{
 cin>>arr[i];
 if(arr[i]%2==0)
 sumEv=sumEv+arr[i];
 else
 sumod=sumod+arr[i];
}
cout<<"sum of evan number"<<sumEv<<" \n";
cout<<"sum of odd number"<<sumod<<" \n";
return 0;
}