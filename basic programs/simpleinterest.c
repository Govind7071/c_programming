#include<stdio.h>
int main()
{
float p;//principal value
 float r; //rate
 float t; //time
 float si; // simple interest
printf("enter the value of p,r,t ;");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("the simple intrest is %.3f",si);
return 0; 
}