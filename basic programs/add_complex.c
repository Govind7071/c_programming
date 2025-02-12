#include<stdio.h>
int main ()
{
float a,b,x,y,sumreal,sumimage;//a=real1,b=ima1,x=real2,y=ima2
printf("enter real and imag of first number :");
scanf("%f%f",&a,&b);
printf("enter real and imag of second number :");
scanf("%f%f",&x,&y);
sumreal=a+x;
sumimage=b+y;
printf("the sum is %.2f + %.3fi",sumreal,sumimage);
return 0;
}