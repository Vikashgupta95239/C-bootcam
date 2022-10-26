// Write a C++ program to overload unary operators that is increment and decremen
#include <iostream>
using namespace std;
class increment
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "value of a  " << a << endl
             << "value of b is  " << b << endl;
    }
    increment operator++() // pre decrement operator

    {
        cout << "pre increment call " << endl;
        increment temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }
    increment operator++(int useless) // post decrement operator
    {
        cout << "pre increment call " << endl;
        increment temp;
        temp.a = a++;
        temp.b = b++;
        return temp;
    }
    increment operator--() // pre decrement operator
    {
        cout << "pre decrement call " << endl;
        increment temp;
        temp.a = --a;
        temp.b = --b;
        return temp;
    }

    increment operator--(int useless) // post decrement operator

    {
        cout << "post decrement call " << endl;
        increment temp;
        temp.a = a--;
        temp.b = b--;
        return temp;
    }
};
int main()
{
    // increment i1,i2;
    // i1.setdata(5,6);
    // ++i1;
    // //i1++;
    // i1.display();

    increment i1, i2, i3, i4;
    i1.setdata(5, 6);
    (--i1).display();
    // post increment
    i2.setdata(2, 3);
    (i2--).display();

       //pre incrment 
       i3.setdata(15, 16);
    (++i3).display();
    // post increment
    i2.setdata(23, 33);
    (i2++).display();
}
