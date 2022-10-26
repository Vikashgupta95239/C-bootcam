

// 2 desing a program for string a machine that always ending with 101;
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("what are the binary number do you to enter");
  scanf("%d", &n);
  int a[n], i;
  printf("enter the %d binary number", n);
  for (int j = 0; j < n; j++)
  {
    scanf("%d", &a[j]);
    if (a[j] != 0 || a[j] != 1)
    {
    }
    else
    {
      printf("you have entered wrong input");
      exit(0);
    }
  }

  if (a[n - 1] == 1 && a[n - 2] == 0 && a[n - 3] == 1)
  {
    printf("yes machine ending with 101............\n");
  }
  else
  {
    printf(" machine not ending with 101............\n");
  }
}