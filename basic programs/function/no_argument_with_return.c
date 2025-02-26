#include<stdio.h>
int sum ();
int  main ()
{
 int    s=0;
    s=sum();
    printf("the sum of the numbers is %d",s);
}
int sum ()
{ int a,b,sum =0;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    sum =a+b;
    return sum;
}