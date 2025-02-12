#include<stdio.h>
int main ()
{
    float m,p,h,c,e,per ,total;
    printf("enter the number :");
    scanf("%f%f%f%f%f",&m,&h,&e,&c,&p);
    total =m+p+h+e+c;
    per =total/500*100;
    if (per>=60)
    printf("1division");
    else if (per>=50)
    printf("2 divison ");
    else if (per>=40)
    printf("3 division");
    else 
    printf("fail");
    return 0;
}