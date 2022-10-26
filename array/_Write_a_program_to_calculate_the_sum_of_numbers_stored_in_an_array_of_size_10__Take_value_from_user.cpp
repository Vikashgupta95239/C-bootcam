#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sum=0;
cout<<"enter the size of array";
cin>>n;
int summ[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>summ[i];
   
}
for(int j=0;j<n;j++)
{
  
    sum=sum+summ[j];
}
cout<<sum;
return 0; 
}