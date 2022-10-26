#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int c = 0;
    char ip[] = {"100.23.65.576"};
    char *ptr = strtok(ip, ".");
    while (ptr != NULL)
    {
        int a = atoi(ptr);
        printf("%s\n", ptr);
        if (a >= 0 && a <= 255)
        {
            c++;
        }
        ptr = strtok(NULL, ".");
    }
    if(c==3)
    {
        printf("valid ip id");

    }
    else
    printf("not valid id");
}