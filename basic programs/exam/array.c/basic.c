#include<stdio.h>
int main ()
{
    int a[5];
    printf("enter the value in array");
    int i ;
    for (i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    printf("\n the values in array");
    for (i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}