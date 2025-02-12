#include<stdio.h>
int main ()
{
    int a[7],min,loc,t,i,j;
    printf("\n enter the values ");
    for(i=0;i<7;i++)
    scanf("%d",&a[i]);
     printf("\n entered values :");
    for(i=0;i<7;i++)
    printf("\t %d",a[i]);
    for(i=0;i<7;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<7;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                loc=j;
            }
        }
    
    if(loc!=i)
    {
        t=a[i];
        a[i]=a[loc];
        a[loc]=t;
    }
}
printf("\n  sorted array :");
for(i=0;i<7;i++)
printf("%d \t ",a[i]);
}