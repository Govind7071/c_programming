#include<stdio.h>
int main ()
{
    struct structure 
    {
        int r;
        char sec;
        float h;
    }S;
    printf("enter the data ");
    scanf("%d%c%f",&S.r,&S.sec,&S.h);
    printf("%d%c%f",S.r,S.sec,S.h);
    return 0 ;
}