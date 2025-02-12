//to check the year is leap year or not
#include<stdio.h>
int main ()
{
int y;
printf("enter a year : ");
scanf("%d",&y);
if((y%100==0 && y%400==0)||(y%100!=0 && y%4==0))
printf("the year is leap year");
else
printf("the year is not a leap year");
return 0;

}