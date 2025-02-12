#include<stdio.h>
int main()
{
    double r,vol;
    printf("enter the radiusof sphere :");
    scanf("%lf",&r);
    vol=4.0/3*r*r*r*3.14;
    printf("the volume of sphere is %.3f",vol);
    return 0;
}