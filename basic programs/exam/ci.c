//to find compound interest
#include<stdio.h>
#include<math.h>
int main ()
{
    double p,r,t,ci,a;
    printf("enter the principal amount,rate and time :");
    scanf("%lf%lf%lf",&p,&r,&t);
a=p*pow((1+r/100),t);
ci=a-p;
printf("the compound interest is %.3lf",ci);
printf("\n the total amount is %.3lf",a);
return 0;
}