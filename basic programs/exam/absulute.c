#include<stdio.h>
int main ()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n<0)
    {
        n=n*-1;
        printf("the absulute value is %d",n);}
        else
        printf("the absulute value is %d",n);
    
        return 0;

    }
