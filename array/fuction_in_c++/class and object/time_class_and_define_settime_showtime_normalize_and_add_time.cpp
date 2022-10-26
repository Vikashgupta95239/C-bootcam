#include<iostream>
#include<conio.h>
using namespace std;
class time
{
    private:
    int hour,minute,second;
    public:
    void set_time(int h,int m,int s)
    {
      hour=h;
      minute=m;
      second=s;
    }
    void showtime()
    {
    // cout<<"hour=>"<<hour<<endl<<"minute=>"<<minute<<endl<<"second=>"<<second<<endl;
    cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    void normalize()
    {
      minute=minute+second/60;
      second=second%60;
      hour=hour+minute/60;
      minute=minute%60;
    }
    time add(time t2)
    {
        time temp;
        temp.hour=hour+t2.hour;
        temp.minute=minute+t2.minute;
        temp.second=second+t2.second;
        temp.normalize();
        return (temp);
    }

};

int main(){
    time t,t2,t3;
    t.set_time(3,45,78);
    t2.set_time(4,45,78);
    t3=t.add(t2);
    t3.showtime();

return 0;
}