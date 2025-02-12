#include<stdio.h>
int  sum(int []);
int main ()
{
    int a[10],i,r;
    printf("enter the elements ");
    for (i=0;i<10;i++)
    scanf("%d",&a[i]);
    r=sum(a);
    printf("the sum of the elenments is %d",r);
    return 0; 

}
int sum  (int a[])
{
int i,sum=0;

for (i=0;i<10;i++)
sum=sum+a[i];
return (sum);

}