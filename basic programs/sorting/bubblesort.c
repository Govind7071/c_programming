#include<stdio.h>
int main ()
{
    int i,j,t,a[3];
    printf("enter the elements in array :");
    for (i=0;i<3;i++)
     scanf("%d",&a[i]);
     printf("\nthe elements is array are :\n");
     for (i=0;i<3;i++)
     printf("\t%d",a[i]);
     for (i=0;i<3;i++)
     {
        for (j=0;j<3;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
     }
     printf("\nthe shorted array is \n");
     for (i=0;i<3;i++)
     printf("\t%d",a[i]);
     return 0;
}