#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,x,sum=0,i;
    cout<<"enter the number";
    cin>>n;
    for(i=0;n;i++)
    {
      x=n%10;
      sum=sum+x;
      n=n/10;
    //   if(n==0)
    //    break;
    }
    // printf("%d",sum);
    cout<<sum;

return 0;
}