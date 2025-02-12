#include<stdio.h>
int main()
{
float a,b,c,d,e,percent,sum;
printf("enter the marks of 5 subjects :");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
sum = a+b+c+d+e;
percent=(sum)/5;
printf("the total obtained marks is : %.3f \n",sum);
printf("the percentage is %.3f",percent);
return 0;
}