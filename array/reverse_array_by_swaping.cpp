#include<iostream>
using namespace std;
int main(){
int a[10]={9,3,-4,1,0,-5,-4,3,9,5};
int i,j,temp;
for(i=0;i<10;i++)
{
    for(j=0;j<9;j++)

{     
    if(a[i]>0)
    {
       temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
    }
}

}
for(i=0;i<9;i++)
{
    cout<<"  "<<a[i];
}
}