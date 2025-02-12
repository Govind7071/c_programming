#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter two variables");
    scanf("%d%d",&a,&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("after swapping a becomes %d and b becomes %d",a,b);
    return 0 ;
}