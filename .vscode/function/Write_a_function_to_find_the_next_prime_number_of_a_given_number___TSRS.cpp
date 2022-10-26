#include <iostream>
#include <conio.h>
int nextprime(int);
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
     cout<<nextprime(n);
}
int nextprime(int n)
{
    int i, j, c = 0;
    for (i = n+1; i <= n * n; i++)
    {         
        c = 0;
        for (j = 2; j < n; j++)
        {
            if (i % j == 0)
            c++; 
            break;     
        }
        if (c == 0)
        {
           return i;
           break;
        }
              

    }
}