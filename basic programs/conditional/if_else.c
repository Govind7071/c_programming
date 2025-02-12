/*take positive integer input and
 tell if it is even od odd*/
#include<stdio.h>
int main ()
{
    int n;
    printf("enter a positive integer :");
    scanf("%d",&n);
    if (n%2==0)
    printf("the given number is even");
    else
    printf("the given number is odd");
    return 0;
}