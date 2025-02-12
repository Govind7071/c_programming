#include<stdio.h>
int main ()
{
    int a[7],t,i,j;
    printf("\n enter the values ");
    for(i=0;i<7;i++)
    scanf("%d",&a[i]);
     printf("\n entered values :");
    for(i=0;i<7;i++)
    printf("\t %d",a[i]);
    for(i=0;i<7;i++)
    {
        t=a[i];
        j=i-1;
        while(t<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
    
    a[j+1]=t;
    }
printf("\n shorted array;");
for(i=0;i<7;i++)
printf("\t %d",a[i]);
return 0;
}