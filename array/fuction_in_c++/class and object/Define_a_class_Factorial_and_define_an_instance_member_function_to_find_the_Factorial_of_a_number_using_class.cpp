#include<iostream>
#include<conio.h>
using namespace std;
// class fectorial
// {private:
// int a,fect;
// public:
// void setdata(int x)
// {
// a=x;
// }
// void showdata()
// {
//    int i;
//     fect=1;
//    for(i=1;i<=a;i++)
// {
//     fect=fect*i;
// } 
// cout<<"fectorial is"<<fect;
// }
// };
// int main(){
// fectorial f;
// f.setdata(5);
// f.showdata();
// return 0;
// }
class fectorial
{
private:
int n,fect;
public:
void setn(int x)
{
    n=x;
}
int getn()
{
    return n;
}
int getfectorial()
{
    return fect;

}
void calculatefectorial()
{
    
   int i ,f;
   f=1;
   if(n<0)
   {

     cout<<"enter the positive number\n";
   }
   for(i=1;i<=n;i++)
{
    f=f*i;
} 
fect=f;
}

};
int main()
{
    fectorial f;
    f.setn(5);
    f.calculatefectorial();
    cout<<"fectorial of"<<f.getn()<<"is"<<f.getfectorial();


}