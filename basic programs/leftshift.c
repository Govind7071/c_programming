#include<stdio.h>
int main ()
{
    int n;
    printf("enter the number :");
scanf("%d",&n);
if ((n%7==0)||(n%10==7))
printf("the number is buzz");
else
printf("the nuber is not buzz");
return 0 ;
}