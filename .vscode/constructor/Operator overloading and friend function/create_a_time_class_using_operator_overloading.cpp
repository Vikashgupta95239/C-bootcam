/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time*/
#include<iostream>
using namespace std;
class Time
{
    private:
    int hour,minutes,second;
    public:
    // void set_time()
    // {
    //     cout<<"Enter the hour :"<<endl;
    //     cin>>hour;
    //     cout<<"Enter the Minutes :"<<endl;
    //     cin>>minutes;
    //     cout<<"Enter the Second :"<<endl;
    //     cin>>second;
    //     minutes=minutes+second/60;
    //     second=second%60;
    //     hour=hour+minutes/60;
    //     minutes=minutes%60;
    //     if(hour>24)
    //     {
    //         cout<<"invalid time"<<endl;
    //         return;
    //     }
    // }
    friend int operator>>(istream &input,Time &t)
    {
        cout<<"Enter the hour :"<<endl;
        input>>t.hour;
        cout<<"Enter the Minutes :"<<endl;
        input>>t.minutes;
        cout<<"Enter the Second :"<<endl;
        input>>t.second;
        t.minutes=t.minutes+t.second/60;
        t.second=t.second%60;
        t.hour=t.hour+t.minutes/60;
        t.minutes=t.minutes%60;
        if(t.hour>24)    
            return 1;
        else
        return 0;

    }
    friend void operator<<(ostream &output,Time &t)
    {
        cout<<t.hour<<":"<<t.minutes<<":"<<t.second<<endl;
    }
    int operator==(Time t2)
    {
        long int time,time2;
        time=hour*60*60+minutes*60+second;
        time2=t2.hour*60*60+t2.minutes*60+t2.second;
        if(time==time2)
        {
            return 1;
        }
        else
        return 0;
    }
};
int main()
{  int x;
    Time t1,t2;
    cout<<"-------Enter the First time-----------"<<endl;
    if(cin>>t1)
    {
        cout<<"invalid time"<<endl;
    }
    cout<<"-------Enter the second time----------"<<endl;
    if(cin>>t2)
    {
        cout<<"invalid time"<<endl;
    }
    
   
    if(t1==t2)
    {  cout<<"both time are equal"<<endl;
     cout<<t1;
      
    }
    else
    {
        cout<<"both time are not equal"<<endl;
    }
   

}