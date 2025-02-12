#include<stdio.h>
int main ()
{
    int bs;
    float hra,da,gs;
    printf("enter the basic salary :");
    scanf("%d",&bs);
    if(bs>=1500)
    {
        hra=500;
        da=0.98*bs;   
    }
    else
{
    hra=0.1*bs;
    da=0.9*bs;
}
gs=bs+hra+da;
    printf("the gross salary is %.2f",gs);

return 0;
}