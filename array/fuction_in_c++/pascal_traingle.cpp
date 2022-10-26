#include<iostream>
using namespace std;

int fectorial(int n)
{
int i;
int fect=1;
for(i=1;i<=n;i++)
{
    fect=fect*i;
}
return fect;
}
int combination(int n,int r)
{  
    int c=(fectorial(n)/(fectorial(r)*fectorial(n-r)));
        
    return c;
}
int main()
{  int n;
cout<<"enter the number to print pascal triangle\n";
cin>>n;
for(int i=0;i<5;i++)
{
    for(int j=0;j<=i;j++)
    {
cout<<" "<<combination(i,j);
    }
    cout<<endl;
}
    
}
