#include<stdio.h>
int main ()
{
    float c,f;
    printf("enter the temperature in fahrenheit degree :");
    scanf("%f",&f);
    c=(f-32)*5.0/9.0;
    printf("the temperature in degree centigrade is %.3f",c);
    return 0 ;
}