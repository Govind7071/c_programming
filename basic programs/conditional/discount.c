#include<stdio.h>
int main ()
{
    int qty;
    float price,total;
    printf("enter the price per item and qty :");
    scanf("%f%d",&price,&qty);
    total=qty*price;
    if(qty>1000)
    {
    total=total-0.1*total;
    printf("the total expanses is %.2f",total);
    }
    else
    printf("the total expanses is %.2f",total);
}