//sum of digits of 5-digit number
#include<stdio.h>
int main ()
{
   long int n,a,sum=0;
    printf("enter a five digit integer :");
    scanf("%ld",&n);
    a=n%10;
    sum=sum+a;
    n=n/10;
    a=n%10;
    sum=sum+a;
    n=n/10;
    a=n%10;
    sum=sum+a;
    n=n/10;
    a=n%10;
    sum=sum+a;
    n=n/10;
    a=n%10;
    sum=sum+a;
    n=n/10;
    printf("the sum of the digits is %ld",sum);
    return 0;
}
