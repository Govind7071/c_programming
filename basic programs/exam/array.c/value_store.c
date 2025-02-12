#include<stdio.h>
int main ()
{
    int n,a[5],b[5],i;
    printf("enter the values in array a ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for (i=0;i<5;i++)
    {
        b[i]=a[4-i];
    }
    printf(" the values in b is:");
    for (i=0;i<5;i++)
    printf("\t %d",b[i]);
    return 0;
}