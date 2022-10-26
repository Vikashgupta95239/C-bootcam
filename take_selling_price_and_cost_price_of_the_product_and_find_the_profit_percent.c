#include<stdio.h>
int main()
{
    float CP,SP,P;
    printf("enter the cost price of the product");
    scanf("%d",&CP);
    printf("enter the selling price of the product");
    scanf("%d",&SP);
    if(CP<SP)
    {
    P=SP-CP;
    printf("profit present is =%f",(P*100)/CP);
    }
    else
    printf("not profit");
}