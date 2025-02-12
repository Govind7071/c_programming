//series is 1-2+3-4......n
#include<stdio.h>
int main ()
{
    int i,n,sume=0,sumo=0,sum;
    printf("enter the last digit :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        sume=(sume+i);
        
        else 
        sumo=sumo+i; 
    }
sume=sume*-1;
    sum=sume+sumo;
    printf("\n the sum of the series is %d ",sum);
    return 0;
}