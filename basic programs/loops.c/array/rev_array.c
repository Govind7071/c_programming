//reverse the elements of array
#include<stdio.h>
int main ()
{
    int i;
    int  a[5],b[5];
    printf("enter the elements in array a :");
    for(i=0;i<5;i++)
    
    scanf("%d",&a[i]);
    
    for(i=0;i<5;i++)
    b[i]=a[4-i];
    for (i=0;i<5;i++)
    printf("\n %d",b[i]);
    return 0;
}   