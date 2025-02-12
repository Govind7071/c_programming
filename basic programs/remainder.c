#include<stdio.h>
int main (){
int a,b;
printf("enter the integers such that 1st int>2nd int\n");
printf("enter the first integer :");
scanf("%d",&a);
printf("enter the second integer");
scanf("%d",&b);
int q = a/b;
int r = a-(b*q);
printf("the remainder is %d :",r);
return 0;
}
