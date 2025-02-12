#include<stdio.h>
int main ()
{
    float sp,profit;
    float cp;
    printf("enter the total selling price and total profit : ");
    scanf("%f%f",&sp,&profit);
    cp = (sp-profit)/15;
    printf("the cost price of one item is : %f",cp);
    return 0;
}