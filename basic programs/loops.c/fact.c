#include<stdio.h>
int main ()
{
    int n,i;
    unsigned long int fact=1;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    fact=fact*i;
    
    printf("\n the factorial of %d is %lu",i,fact);
}
}