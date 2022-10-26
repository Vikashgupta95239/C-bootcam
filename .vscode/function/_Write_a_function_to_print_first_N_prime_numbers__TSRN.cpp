#include <iostream>
#include <conio.h>
int nextprime(int);
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
     nextprime(n);
}
int nextprime(int n)
{
    int i, j, c = 0;
    for (i =2; i <= n ; i++)
    {         
        c = 0;
        for (j = 2; j<=i; j++)
        {
            if (i % j == 0)
            {
            c++; 
            break;     
            }
        }
        if (c == 0)
        {  cout<<" "<<i;
        

         
        }
              

    }
}