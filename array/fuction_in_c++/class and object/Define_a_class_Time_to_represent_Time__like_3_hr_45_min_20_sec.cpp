#include<iostream>
#include<conio.h>
using namespace std;
class time
{private:
    int hour,minute,second;
    public:
    void setdata(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void showdata()
    {
       
    //     if(second>60)
    //     {
    //         minute=minute+(second/60);
    //         second=second%60;
    //     }
    //    if(minute>60)
    //     {
    //         hour=hour+minute/60;
    //         minute=minute%60;
    //     }
          minute=minute+second/60;
      second=second%60;
      hour=hour+minute/60;
      minute=minute%60;
         cout<<hour<<"hr"<<minute<<"min"<<second<<"sec";
    }
};
int main(){
time t;
t.setdata(3,12,320);
t.showdata();
return 0;
}
