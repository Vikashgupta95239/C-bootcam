#include<iostream>
#include<conio.h>
void natural(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
natural(n);
return 0;
}
void natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2)
        printf("%d ",i);
    }
}