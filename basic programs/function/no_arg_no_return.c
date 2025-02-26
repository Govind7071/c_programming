#include<stdio.h>
void sum();
void subt();
void mul();
void div();
int main ()
{
    sum();
    subt();
    mul();
    div();
    return 0;
}
void sum ()
{
   int a,b,sum=0;
   printf("\nenter two number :");
    scanf("%d%d",&a,&b);
    sum=a+b;
printf("\nthe sum is %d",sum);
}
void subt()
{
    int a,b,subt=0;
    printf("\nenter two number :");
    scanf("%d%d",&a,&b);
    subt=a-b;
    printf("\nthe difference is %d",subt);
}
void mul()
{
    int a,b,mul;
    printf("\nenter two number :");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("\nthe multiplication is %d",mul);
    }

void div()
{
    int a,b,div;
    printf("\nenter two number :");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("\nthe division is %d",div);
    }
    