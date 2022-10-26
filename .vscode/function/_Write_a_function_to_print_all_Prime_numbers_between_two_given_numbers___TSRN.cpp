#include <iostream>
#include <conio.h>
int nextprime(int,int);
using namespace std;
int main()
{
    int n,m;
    cout << "enter the two number";
    cin >> n>>m;
     nextprime(n,m);
}
int nextprime(int n,int m)
{
    int i, j, c = 0;
    for (i =n; i <= m ; i++)
    {         
        c = 0;
        for (j = 2; j<=n; j++)
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