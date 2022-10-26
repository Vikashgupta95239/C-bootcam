#include<iostream>
using namespace std;
void prime(int n)

{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {  count++;
        
            cout<<"not prime";
            break;
        }
    }
    if(count==0)
    {
      cout<<"prime number";
    }
}
int main()
{
    int n;
    cout<<"enter the number to check prime or not";
    cin>>n;
    prime(n);
}