#include<iostream>
#include<math.h>
#include<conio.h>
void xpowery(int x,int y);
using namespace std;
int main(){
int x,y;
cout<<"enter the x,ynumber";
cin>>x>>y;
xpowery(x,y);
return 0;
}
void xpowery(int x,int y)
{
    cout<<pow(x,y);
} 