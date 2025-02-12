#include<stdio.h>
int main (){
float a,b,x,y,sum1,sum2;
printf("enter the real and imag of first number :");
scanf("%f%f",&a,&b);
printf("enter the real and imag of second number :");
scanf("%f%f",&x,&y);
sum1 =(a+x); 
sum2=(b+y);
printf("the sum is %.2f+%.3fi",sum1,sum2);
return 0;
}