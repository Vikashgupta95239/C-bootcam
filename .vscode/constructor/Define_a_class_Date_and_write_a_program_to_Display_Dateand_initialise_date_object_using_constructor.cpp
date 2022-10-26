#include<iostream>
#include<conio.h>
using namespace std;
class Date
{
    private:
    int date,month,year;
    public:
    Date(int d,int m,int y)
    {
        date=d;
        month=m;
        year=y;
      

    }
    void display()
    {
        if(date>31||month>12)
        {
            cout<<"you have enter wrong input"<<endl;
        }
        else
        cout<<date<<"/"<<month<<"/"<<year<<endl;
        
    }
    Date()
    {
        cout<<"default constructor"<<endl;
    
    }
    ~Date()
    {
        cout<<"bye........"<<endl;
    }
};
int main(){
    Date Date(12,4,29);
    Date.display();

return 0;
}