#include<iostream>
using namespace std;
int main(){
int a[10]={9,3,4,1,0,5,4,3,9,5};
int freq[1000]={0},i;
for(i=0;i<10;i++)
{
   freq[a[i]]++;
}
for(i=0;i<1000;i++)
{  
    if(freq[i]!=0)
    {
        printf("%d==>%d\n",i,freq[i]);
    }
}
}