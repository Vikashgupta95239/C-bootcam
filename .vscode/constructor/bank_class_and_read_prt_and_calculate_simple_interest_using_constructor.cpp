#include<iostream>
#include<conio.h>
using namespace std;

class bank{
    private:
    int principle;
    int rate;
    int year;
    float simple_interest;
    public:
    bank()
    {
        cout<<"enter the principle"<<endl;
        cin>>principle;
        cout<<"enter  the rate of interest"<<endl;
        cin>>rate;
        cout<<"enter the year"<<endl;
        cin>>year;
    }
    float si()
    {
        simple_interest=(principle*rate*year)/100.0;
        return simple_interest;
    }
};
int main(){
bank b;
cout<<b.si();
return 0;
}