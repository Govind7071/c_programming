#include<stdio.h>
int main ()
{
    int i,n;
    unsigned long int fact=1;
    printf("\n enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("the factorial is %lu",fact);
    return 0;
}